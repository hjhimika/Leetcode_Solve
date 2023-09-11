# Write your MySQL query statement below
select dpt.name as Department, emp.name as Employee, emp.salary as Salary
from Department dpt join Employee emp on
emp.departmentId = dpt.id 
where 3> (
    select count(distinct emp1.salary)
    from Employee emp1
    where emp1.salary > emp.salary and
    emp1.departmentId = emp.departmentId
)
