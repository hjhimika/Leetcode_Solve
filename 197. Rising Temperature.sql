
select B.id as Id from Weather A, Weather B
where DATEDIFF(B.recordDate, A.recordDate) = 1
and A.temperature < B.temperature
