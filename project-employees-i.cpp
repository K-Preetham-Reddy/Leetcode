# Write your MySQL query statement below
SELECT Project.project_id, ROUND(AVG(Employee.experience_years),2) AS average_years
FROM Project
CROSS JOIN Employee
WHERE Project.employee_id=Employee.employee_id
GROUP BY Project.project_id;