select project_id,round(sum(experience_years)*1.0/count(p.employee_id),2)as average_years from project as p join employee as e on p.employee_id=e.employee_id group by project_id
