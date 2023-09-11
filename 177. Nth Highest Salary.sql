CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
set N= N-1;
  RETURN (
      # Write your MySQL query statement below.
   select distinct salary from Employee 
   order by salary desc
   limit 1 offset N
   

  );
END

#  SELECT DISTINCT salary
#         FROM Employee 
#         ORDER BY Salary DESC
#         OFFSET @N - 1 ROWS 
#         FETCH NEXT 1 ROWS ONLY
#     );
