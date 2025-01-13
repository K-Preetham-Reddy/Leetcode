SELECT DISTINCT e1.reports_to as employee_id, e2.name, 
        COUNT(*) as reports_count, ROUND(AVG(e1.age),0) as average_age
FROM Employees e1
LEFT JOIN Employees e2 ON e1.reports_to = e2.employee_id
WHERE e1.reports_to IS NOT NULL
GROUP BY e1.reports_to
ORDER BY employee_id ASC