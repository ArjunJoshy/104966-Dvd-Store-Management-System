# Test Plan
## Introduction
The test plan  is designed to identify the items and features to be tested. The method of testing to be done for the dvd store management system is described below. The given test cases are tested for validity and accuracy.If the output of test cases matches with the expected results, the test passes. 
 
## Test Strategy
### Scope Of Testing
### Features to be Tested:

Module Name | Description
------------ | -------------
Login | System allows access to authorised personnel and prevents any unauthorized entry.
Add Record | A new record of the selected category can be added to the database .
Delete Record | An existing record from the database can be removed by entering its unique ID.
Edit Record | The details of an existing record can be modified by the admin.
Search Record | Admin can search the system for a specific record by entering its ID or name and its details will be displayed.
View | Enables the admin to view the entire database of the system.
Exit | After the session the admin can safely logout from the system.

### Features Not to be Tested:
1. User Interface
2. Hardware Interfaces

## Test Objective
The test objectives are to verify the functionality of the dvd store management system. The focus is to be given on testing the functionalities such as  Admin Login , Add record, Delete Record , Edit Record ,  .etc to make sure these functions are working efficiently.

## Test Criteria
### Suspension Criteria
 * If more than 50% of test cases are failed then the testing is suspended until all fail cases are fixed.
### Exit Criteria
* 100% Test coverage.
* All manual test cases are executed.
* All open bugs are fixed or will be fixed in the next release.

## Test Environment
* All test cases are executed in CodeBlocks IDE.

#Test Cases

Test Case ID | Test Case Objective | Test Steps| Test Data | Status
------------ | --------------------|-----------|-----------|---------
TC_01 | Check admin login with valid data | Enter Password | Password=pass | Successful
TC_02 | Check login with invalid data | Enter Password | Password=DVD | Successful
TC_03 | Check if admin can add new records | 1. Choose option 1 in main menu 2. Choose type of DVD 3. Give unique DVD Id 4. Enter name 5. Enter price 6. Enter availability status 7. Enter quantity | 1.Choose option 1 in main menu 2.DVD type=Movies 3.DVD Id=1 4.DVD Name=Black Panther 5.Price=100 6.Availability Status=yes 7.Quantity=30 | Successful
TC_04 | Check if the admin can delete record | 1.Choose option 2 in main menu 2.Enter id number | 1.Choose option 2 in main menu 2.Id =1 | Successful
TC_05 | Check if the admin can search   a DVD | 1.Choose option 3 in main menu 2.Enter id number or name of the DVD| 1.Choose option 3 in main menu 2. DVD Name=Black Panther |Successful
TC_06 | Check if the admin can view DVD list | Select option 4 in main menu | Select option 4 in main menu | Successful
TC_07 | Check if the admin can edit DVD record | 1.Select option 5 in main menu 2.Enter Id number 3.Enter new name 4.Enter new Price 5.New availability status 6.Enter new quantity | 1.Select option 5 in main menu 2.Id=1 3. New name=Black Panther 4.Price=200 5.Availability status=yes 6.Quantity=20 | Successful
TC_08 | Check if exit is working | Enter 6 in main menu | Enter 6 in main menu | Successful
 

# Expected Result

Test Case ID | Test Case Objective | Expected Result
-------------|---------------------|----------------
TC_01 | Check admin login with valid data | Login should be successful and the system should display the main menu.
TC_02 | Check login with invalid data | Error message should be displayed
TC_03 | Check if admin can add new records | At first Admin should select the required category and enter the unique ID number of the record to be added.Then he/she should fill all the fields with proper data .If any error is encountered like a pre-existing ID number,the system should display a proper message.Otherwise add the record.
TC_04 | Check if the admin can delete record | System should delete the details of the particular record using its unique ID number.Otherwise a proper error message should be displayed.
TC_05 | Check if the admin can search   a DVD | System should display the details of a particular record identified using its unique ID number or Name.Otherwise display proper error message.
TC_06 | Check if the admin can view DVD list | Admin should be able to view the details of all records present in the system.
TC_07 | Check if the admin can edit DVD record | Admin should be able to edit the details of a pre-existing record identified using its ID number.
TC_08 | Check if exit is working | System should exit the program and  “Thank You” message should be displayed.





