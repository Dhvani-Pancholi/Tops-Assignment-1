####  Write a stored procedure that accepts course_id as input and returns the course details

    DELIMITER //

    create procedure GetCourseDetailsById(in course_id int)
    begin
        select *
        from courses
    where course_id = course_id;
end //

DELIMITER ;