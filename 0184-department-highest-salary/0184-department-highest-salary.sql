# Write your MySQL query statement below
SELECT 
    Employee.name AS Employee,
    Department.name AS Department,
    Employee.salary
FROM Employee
LEFT JOIN Department
ON Employee.departmentId = Department.id
JOIN (
    SELECT departmentId, MAX(salary) AS max_salary
    FROM Employee
    GROUP BY departmentId
) AS M
ON Employee.departmentId = M.departmentId
AND Employee.salary = M.max_salary;

