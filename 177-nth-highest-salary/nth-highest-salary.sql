CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
DETERMINISTIC

BEGIN
SET N=N-1;
  RETURN (
    
    COALESCE(
      (SELECT DISTINCT salary
       FROM employee
       ORDER BY salary DESC
       LIMIT 1 offset N),
      NULL
    )
  );
END;
