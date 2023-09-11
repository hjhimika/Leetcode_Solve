# Write your MySQL query statement below
select DPT.name as Department, EMP.name as Employee, EMP.salary as Salary
From Department DPT join Employee EMP on
 EMP.departmentId = DPT.id and
(EMP.departmentId, salary) in (
    select departmentId, MAX(salary)
    from Employee group by departmentId
)
