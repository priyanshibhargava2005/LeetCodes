# Write your MySQL query statement below
select emp.name AS Employee from Employee e INNER JOIN Employee emp ON e.id = emp.managerId where e.salary < emp.salary;  