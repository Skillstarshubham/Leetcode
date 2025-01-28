select e.name from employee as e join(
    select managerid, count(*) as s from employee group by managerid having count(*)>=5
) e2 on e.id=e2.managerid;