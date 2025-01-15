# Write your MySQL query statement below
(SELECT Users.name AS results
FROM Users
INNER JOIN MovieRating
ON Users.user_id=MovieRating.user_id
GROUP BY Users.name
ORDER BY COUNT(*) DESC,Users.name
LIMIT 1)
UNION ALL
(SELECT Movies.title
FROM Movies
INNER JOIN MovieRating
ON Movies.movie_id=MovieRating.movie_id
WHERE MONTH(MovieRating.created_at)=2 AND YEAR(MovieRating.created_at)=2020
GROUP BY Movies.movie_id
ORDER BY AVG(rating) DESC,Movies.title
LIMIT 1)


