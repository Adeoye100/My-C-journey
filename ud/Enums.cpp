//
// Created by ad on 24/05/2026.
//
#include <iostream>
#include <string>
using namespace std;

// Basic enum
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// Enum with custom values
enum ErrorCode {
    SUCCESS = 0,
    FILE_NOT_FOUND = 404,
    ACCESS_DENIED = 403,
    SERVER_ERROR = 500
};

// Enum class (C++11) - strongly typed, safer
enum class Status {
    Pending,
    Approved,
    Rejected,
    InReview
};

enum class Priority {
    Low = 1,
    Medium = 2,
    High = 3,
    Critical = 4
};

string getDayName(Day d) {
    switch(d) {
        case MONDAY: return "Monday";
        case TUESDAY: return "Tuesday";
        case WEDNESDAY: return "Wednesday";
        case THURSDAY: return "Thursday";
        case FRIDAY: return "Friday";
        case SATURDAY: return "Saturday";
        case SUNDAY: return "Sunday";
        default: return "Unknown";
    }
}

string getStatusMessage(Status s) {
    switch(s) {
        case Status::Pending: return "Awaiting review";
        case Status::Approved: return "Application approved!";
        case Status::Rejected: return "Application rejected";
        case Status::InReview: return "Currently under review";
        default: return "Unknown status";
    }
}

int main() {
    Day today = FRIDAY;
    cout << "Today is: " << getDayName(today) << endl;

    if(today == FRIDAY) {
        cout << "Weekend is near! 🎉" << endl;
    }

    // Error codes
    ErrorCode result = SUCCESS;
    cout << "Operation result: " << result << endl;

    // Enum class usage (note the scope resolution)
    Status appStatus = Status::Pending;
    cout << getStatusMessage(appStatus) << endl;

    appStatus = Status::Approved;
    cout << getStatusMessage(appStatus) << endl;

    // Priority system
    Priority taskPriority = Priority::Critical;
    if(taskPriority == Priority::Critical) {
        cout << "⚠️  Handle this task immediately!" << endl;
    }

    return 0;
}