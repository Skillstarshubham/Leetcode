select e.name,b.bonus from Employee as e 
left outer join Bonus as b 
on e.empid=b.empid 
where bonus<1000 or bonus is null