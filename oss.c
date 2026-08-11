#include <stdio.h>
#include <windows.h>

HANDLE mutex, writeblock;
int data = 0, rcount = 0;

DWORD WINAPI reader(LPVOID arg)
{
    int f = (int)(size_t)arg;

    WaitForSingleObject(mutex, INFINITE);
    rcount++;
    if (rcount == 1)
        WaitForSingleObject(writeblock, INFINITE);
    ReleaseSemaphore(mutex, 1, NULL);

    printf("Data read by reader %d is %d\n", f, data);
    Sleep(1000);

    WaitForSingleObject(mutex, INFINITE);
    rcount--;
    if (rcount == 0)
        ReleaseSemaphore(writeblock, 1, NULL);
    ReleaseSemaphore(mutex, 1, NULL);

    return 0;
}

DWORD WINAPI writer(LPVOID arg)
{
    int f = (int)(size_t)arg;

    WaitForSingleObject(writeblock, INFINITE);

    data++;
    printf("Data written by writer %d is %d\n", f, data);
    Sleep(1000);

    ReleaseSemaphore(writeblock, 1, NULL);

    return 0;
}

int main()
{
    int i;
    HANDLE rtid[3], wtid[3];

    // Create semaphores
    mutex = CreateSemaphore(NULL, 1, 1, NULL);
    writeblock = CreateSemaphore(NULL, 1, 1, NULL);

    // Create threads
    for (i = 0; i < 3; i++)
    {
        wtid[i] = CreateThread(NULL, 0, writer, (LPVOID)(size_t)i, 0, NULL);
        rtid[i] = CreateThread(NULL, 0, reader, (LPVOID)(size_t)i, 0, NULL);
    }

    // Wait for threads
    WaitForMultipleObjects(3, wtid, TRUE, INFINITE);
    WaitForMultipleObjects(3, rtid, TRUE, INFINITE);

    return 0;
}