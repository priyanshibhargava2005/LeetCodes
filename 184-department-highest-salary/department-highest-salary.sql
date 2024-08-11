# Write your MySQL query statement below
SELECT d.name AS Department, e.name AS Employee, e.salary AS Salary 
FROM Employee e
JOIN Department d ON d.id = e.departmentId
WHERE e.salary = (
    SELECT MAX(e2.salary)
    FROM Employee e2
    WHERE e2.departmentId = e.departmentId
);
