1. Input - Output Requirements:

All the fields such as DVD are validated and do not take invalid values to get proper form of output.
The software also takes the details of  the DVD, to make stock as an input and also generate the record of the DVD as an output.
Avoiding errors in data entry and modification.
Controlling the amount of input.


2.Hardware Requirements:

The minimum requirement of turbo c is acceptable to run this software.
Processor: Pentium 3/1.4GHz or above processor.
System Type: X86-based OS.
Minimum RAM Size: 512MB or above
Hard Disk: 1GB or above of available space
Monitor: 800*600px or above resolution display.


3. Software Requirements:

Operating System : Window XP, Vista, 7 or above.
IDE : CodeBlocks , Dev C++ or any suitable IDE.
Compiler Used: MingGW compiler, GCC compiler 


4.Non Functional Requirements:

Efficiency requirement: When this system will be implemented admin can easily access the record.
Reliability requirement: The system should accurately perform entry of new cd’s, deletion,modification,search, view.
Usability requirement:System is designed for a user friendly environment so that the admin can perform various tasks easily and in an efficient way.
Implementation requirement: The whole project is designed in ‘C’ Programming language and different variables and strings have been used for the development of this project. It’s easy to operate and understand by users. There’s no any error and warning contents in the project and the design is simple and the user won’t find it difficult to use and navigate.


5. Functional Requirements:

Admin Login:

Feature: The feature used by the admin to login into the system. They are required to enter the password to enter the system.Password will be verified and if it is invalid he/she cannot enter the system.


Functional Requirement:

The system must only allow the one with a valid password.
The system performs an  authorization process which decides what user  can have access to.
The user must be able to exit from the system when required.

 Add DVD record:
 
Feature: Helps to add new records to the system with their details.

Functional Requirement

System must be able to add new DVD’s.
System must be able to add details such as id,type, name, availability, quantity and price of the added DVD.
System should not allow record with same id

Delete DVD record

Feature:Helps to delete an existing record when required.

Functional Requirement:

System must be able to delete a record when demanded  by giving its id or name.
System should not delete other records.

Search DVD record

Feature: It is found in the DVD maintenance part. We can search for DVDs on id and name.

Functional Requirement:

System must be able to search the record based on the selected search type.
System must able to filter DVD based on keyword entered

View DVD list

Feature: We can view the whole list of record

Functional requirement:

System must be able to show all the  details of DVD’s that are added in the system.

Edit DVD record

Feature: if the admin found some error during the data entry process and came to know while handling, the system can be modified by using the edit option.

Functional requirement:

System must be able to make necessary modifications.
System should make changes to only the selected DVD.

Exit

Feature:The admin must be able to safely exit from the application program into the main menu.

Functional Requirement:

System must enable the admin to go back to the main menu .
Make sure no interrupts or loops are encountered in the specific section before exiting.


