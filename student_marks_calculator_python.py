write a program to calculate the marks of a student result base on marks of 2 academic, 3 activity and a sport subject. weightage of the
subject are: academic = 50%, activity = 30%, sport = 20%. calculate the final percentage
'''
academic1 = float(input("Enter marks for Academic Subject 1 (out of 100): "))
academic2 = float(input("Enter marks for Academic Subject 2 (out of 100): "))

activity1 = float(input("Enter marks for Activity 1 (out of 100): "))
activity2 = float(input("Enter marks for Activity 2 (out of 100): "))
activity3 = float(input("Enter marks for Activity 3 (out of 100): "))

sport = float(input("Enter marks for Sport (out of 100): "))

academic_avg = (academic1 + academic2) / 2
activity_avg = (activity1 + activity2 + activity3) / 3

academic_weighted = academic_avg * 0.5
activity_weighted = activity_avg * 0.3
sport_weighted = sport * 0.2

final_percentage = academic_weighted + activity_weighted + sport_weighted

print(f"Final Percentage: {final_percentage}%")
