select today.id as Id from weather as today cross join weather as yesterday 
where DATEDIFF(DAY, yesterday.recordDate, today.recordDate)=1 
and today.temperature>yesterday.temperature;