//task1.




#include <iostream>
using namespace std;
string decideActivity(string temp, string hum);
int main()
{
    string temp;
    cout << "Enter temperature (warm or cold): ";
    cin >> temp;
    string hum;
    cout << "Enter humidity (dry or humid): ";
    cin >> hum;
    string Activity = decideActivity(temp, hum);
    cout << "Recommended activity: " << Activity;
}
string decideActivity(string temp, string hum)
{
    string Activity;
    string a = "warm", b = "cold";
    string c = "humid", d = "dry";
    if (temp == a && hum == d)
        {
            Activity = "Play tennis";
        }
    else
        {
            Activity = "swim";
        }
    if (temp==b && hum==c)
        {
            Activity="Watch tv";
        }    
    else
        {
            Activity="Play basketball";
        }   
        return Activity;
 }

//task2.






#include <iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

int main()
{
    string name, grade;
    float average;
    int m1, m2, m3, m4, m5;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> m1;
    cout << "Enter marks for Maths: ";
    cin >> m2;
    cout << "Enter marks for Chemistry: ";
    cin >> m3;
    cout << "Enter marks for Social Science: ";
    cin >> m4;
    cout << "Enter marks for Biology: ";
    cin >> m5;

    average = calculateAverage(m1, m2, m3, m4, m5);
    grade = calculateGrade(average);

    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;

    //task3.






    #include <iostream>
using namespace std;

string findZodiacSign(int day, string month);

int main()
{
    int day;
    string month;

    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;

    string zodiacSign = findZodiacSign(day, month);
    cout << "Zodiac Sign: " << zodiacSign << endl;

    return 0;
}

string findZodiacSign(int day, string month)
{
    string zodiacSign;

    if ((month == "March" && day >= 21) || (month == "April" && day <= 19))
    {
        zodiacSign = "Aries, The Ram";
    }
    else if ((month == "April" && day >= 20) || (month == "May" && day <= 20))
    {
        zodiacSign = "Taurus, The Bull";
    }
    else if ((month == "May" && day >= 21) || (month == "June" && day <= 20))
    {
        zodiacSign = "Gemini, The Twins";
    }
    else if ((month == "June" && day >= 21) || (month == "July" && day <= 22))
    {
        zodiacSign = "Cancer, The Crab";
    }
    else if ((month == "July" && day >= 23) || (month == "August" && day <= 22))
    {
        zodiacSign = "Leo, The Lion";
    }
    else if ((month == "August" && day >= 23) || (month == "September" && day <= 22))
    {
        zodiacSign = "Virgo, The Virgin";
    }
    else if ((month == "September" && day >= 23) || (month == "October" && day <= 22))
    {
        zodiacSign = "Libra, The Scales";
    }
    else if ((month == "October" && day >= 23) || (month == "November" && day <= 21))
    {
        zodiacSign = "Scorpio, The Scorpion";
    }
    else if ((month == "November" && day >= 22) || (month == "December" && day <= 21))
    {
        zodiacSign = "Sagittarius, The Archer";
    }
    else if ((month == "December" && day >= 22) || (month == "January" && day <= 19))
    {
        zodiacSign = "Capricorn, The Goat";
    }
    else if ((month == "January" && day >= 20) || (month == "February" && day <= 18))
    {
        zodiacSign = "Aquarius, The Water Bearer";
    }
    else if ((month == "February" && day >= 19) || (month == "March" && day <= 20))
    {
        zodiacSign = "Pisces, The Fishes";
    }
    return zodiacSign;
}



//  Task4


#include <iostream>
using namespace std;
float balance_calculate(float minutes);
main()
{
    char service_code;
    cout << "Enter the service code(R/r for regular, P/p for premium): ";
    cin >> service_code;

    if (service_code == 'p' || service_code == 'P')
    {
        char timecall;
        cout << "Enter time of tha call (D/d for day, N/n for night): ";
        cin >> timecall;
    }
    float min;
    cout << "Enter the number of minutes used: ";
    cin >> min;
    if (service_code == 'P' || service_code == 'p')
    {
        cout << "Service Type: Premium" << endl;
    }
    else if (service_code == 'R' || service_code == 'r')
    {
        cout << "Service Type: Regular" << endl;
    }
    cout << "Total Minutes Used: " << min << endl;
    float amount;
    amount = balance_calculate(min);
    cout << "Amount Due: $" << amount;
}
float balance_calculate(float minutes)
{
    char service_code;
    char timecall;
    float amount;
    if ((service_code == 'P' || service_code == 'p') && (timecall == 'D' || timecall == 'd') && minutes > 75)
    {
        float calculate1 = minutes - 75;
        amount = calculate1 * 0.10;
    }
    if ((service_code == 'P' || service_code == 'p') && (timecall == 'D' || timecall == 'd') && minutes <= 75)
    {

        amount = 0;
    }
    if ((service_code == 'P' || service_code == 'p') && (timecall == 'N' || timecall == 'n') && minutes > 100)
    {
        float calculate1 = minutes - 100;
        amount = calculate1 * 0.05;
    }
    if ((service_code == 'P' || service_code == 'p') && (timecall == 'N' || timecall == 'n') && minutes <= 100)
    {

        amount = 0;
    }

    if ((service_code == 'R' || service_code == 'r') && minutes > 50)
    {
        float calculate1 = minutes - 50;
        amount = (10.00) + (calculate1 * 0.10);
    }

    if ((service_code == 'R' || service_code == 'r') && minutes <= 50)
    {

        amount = 10.00;
    }
    return amount;
}


\\ Task5


#include <iostream>
using namespace std;
float calculateFruitPrice(string fruit, string dayOfWeek, float quantity);
int main()
{
    string fruit, dayOfWeek;
    float quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week(e.g., Monday, Sunday): ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;
    cout << calculateFruitPrice(fruit, dayOfWeek, quantity);
}
float calculateFruitPrice(string fruit, string dayOfWeek, float quantity)
{
   
    if (dayOfWeek == "Monday" || dayOfWeek == "Tuesday" || dayOfWeek == "Wednesday" || dayOfWeek == "Thursday" || dayOfWeek == "Friday")
    {
        if (fruit == "banana")
        {
            cout << quantity * 2.50;
        }
        else if (fruit == "apple")
        {
            cout << quantity * 1.20;
        }
        else if (fruit == "orange")
        {
            cout << quantity * 0.85;
        }
        else if (fruit == "grapefruit")
        {
            cout << quantity * 1.45;
        }
        else if (fruit == "kiwi")
        {
            cout << quantity * 2.70;
        }
        else if (fruit == "pineappple")
        {
            cout << quantity * 5.50;
        }
        else
        {
            if (fruit == "grapes")
            {
                cout << quantity * 3.85;
            }
        }
    }
    else if (dayOfWeek == "saturday" || dayOfWeek == "Sunday")
    {
        if (fruit == "banana")
        {
            cout << quantity * 2.70;
        }
        else if (fruit == "apple")
        {
            cout << quantity * 1.25;
        }
        else if (fruit == "orange")
        {
            cout << quantity * 0.90;
        }
        else if (fruit == "grapefruit")
        {
            cout << quantity * 1.60;
        }
        else if (fruit == "kiwi")
        {
            cout << quantity * 3.00;
        }
        else if (fruit == "pineapple")
        {
            cout << quantity * 5.60;
        }
        else
        {
            if (fruit == "grapes")
            {
                cout << quantity * 4.20;
            }
        }
    }
    else
    {
        if (fruit != "banana" || fruit != "apple" || fruit != "orange" || fruit != "grapefruit" || fruit != "kiwi" || fruit != "pineapple" || fruit != "grapes")
        {
            cout << "Error";
        }
        if (dayOfWeek != "Monday" || dayOfWeek != "Tuesday" || dayOfWeek != "Wednesday" || dayOfWeek != "Thursday" || dayOfWeek != "Friday" || dayOfWeek != "Saturday" || dayOfWeek != "Sunday")
        {
            cout << "Error";
        }
    }
}

//task 6


#include <iostream>
using namespace std;
string calculateHotelPrice(string month, int numberOfStay);
int main()
{
    string month, room;
    int numberOfStay;
    cout << "Enter the month (May,June,July,August,September,October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> numberOfStay;
    string total =  calculateHotelPrice(month, numberOfStay);
}
string calculateHotelPrice(string month, int numberOfStay)
{
    if (month == "May" || month == "October")
    {
        if (numberOfStay > 7 || numberOfStay <= 14)
        {
            cout << "Apartment: " << (numberOfStay * 65) << "$"<<'\n';
            cout << "Studio: " << ((numberOfStay * 50) - ((numberOfStay * 50) * 0.5)) << "$"<<'\n';
        }
        else if (numberOfStay > 14)
        {
            cout << "Apartment: " <<( (numberOfStay * 65)-((numberOfStay*65)*0.1)) << "$"<<'\n';
            cout << "Studio: " << ((numberOfStay * 50) - ((numberOfStay * 50) * 0.3)) << "$"<<'\n';
        }
        else
        {
            cout << "Apartment: " << numberOfStay * 65 << "$"<<'\n';
            cout << "Studio: " << numberOfStay * 50 << "$"<<'\n';
        }
    }
    if (month == "june" || month == "september")
    {
        if (numberOfStay > 14)
        {
            cout << "Apartment: " <<( (numberOfStay * 68.70)-((numberOfStay*68.70)*0.1)) << "&"<<'\n';
            cout << " Studio: " << ((numberOfStay * 75.20) - ((numberOfStay * 75.20) * 0.2)) << "$"<<'\n';
        }
        else
        {
        cout << "Apartment: " << numberOfStay * 68.70 << "&"<<'\n';
        cout << "Studio: " << numberOfStay * 75.20 << "&"<<'\n';
        }
    }
    if(month=="july" || month=="august")
    {
        cout<<"Apartment: "<<numberOfStay*77<<"$"<<'\n';
        cout<<"Studio: "<<numberOfStay*76<<"$"<<'\n';
    }
}


//task7

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

int main()
{
    int eHour, eMinute, sHour, sMinute;
    cout << "Exam Starting Time (hour): ";
    cin >> eHour;
    cout << "Exam Starting Time (minutes): ";
    cin >> eMinute;
    cout << "Student hour of arrival: ";
    cin >> sHour;
    cout << "Student minutes of arrival: ";
    cin >> sMinute;

    string status = checkStudentStatus(eHour, eMinute, sHour, sMinute);
    cout << status << '\n';

    return 0;
}


string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{

    int timeDifference = (studentHour - examHour) * 60 + (studentMinute - examMinute);


    if (timeDifference > 30)
    {
        int hours = timeDifference / 60;
        int minutes = timeDifference % 60;
        stringstream result;
        if (hours > 0)
        {
            result << hours << ":" <<setw(2) <<setfill('0') << minutes << " hours after the start";
        }
        else
        {
            cout<<"Late"<<'\n';
            result << minutes << " minutes after the start";
        }
        return result.str();
    }
    else if (timeDifference < 30)
    {
        timeDifference = timeDifference;
        int hours = timeDifference / 60;
        int minutes = timeDifference % 60;
        std::stringstream result;
        if (hours > 0)
        {
            result << hours << ":" << setw(2) << setfill('0') << minutes << " hours before the start";
        }
        else
        {
            result << minutes << " minutes before the start";
        }
        return result.str();
    }
    else
    {
        if (timeDifference == 0)
        {
            return "On time";
        }
        else
        {
            int minutes = -timeDifference;
            return to_string(minutes) + " minutes before the start";
        }
    }
}
 

//task8

#include <iostream>
#include <cmath>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends);
int main()
{
    string yearType;
    int holidays, hometownWeekends;
    cout << "Enter year type: ";
    cin >> yearType;

    cout << "Enter the count of holidays: ";
    cin >> holidays;

    cout << "Enter the number of  weekends: ";
    cin >> hometownWeekends;

    int result = calculateVolleyballGames(yearType, holidays, hometownWeekends);
    cout  << result  << endl;

    return 0;
}

int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int weekendsInSofia = 48 - hometownWeekends;
    int normalWeekends = weekendsInSofia * 3 / 4;
    int leapYearBonus = 0;

    if (yearType == "leap")
    {

        leapYearBonus = (round(normalWeekends * 0.15));
    }

    int totalVolleyballGames = normalWeekends + leapYearBonus + holidays + hometownWeekends;

    return totalVolleyballGames;
}


//task9


#include <iostream>
#include <string>
using namespace std;
string checkPointPosition(int h, int x, int y);

int main()
{
    int h, x, y;
    cin >> h;
    cin >> x;
    cin >> y;

    string result = checkPointPosition(h, x, y);
    cout << result << endl;

    return 0;
}
string checkPointPosition(int h, int x, int y)
{
    int x1 = 0, y1 = 0;
    int x2 = 3 * h, y2 = 4 * h;

    if ((x > x1 && x < x2) && (y > y1 && y < y2))
    {
        if ((x > h && x < 2 * h) && (y > h && y < 3 * h))
        {
            return "Inside";
        }
        else
        {
            return "Border";
        }
    }
    else
    {
        return "Outside";
    }
}



