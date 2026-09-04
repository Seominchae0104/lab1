#include <iostream>
#include <iostream>

int main()
{
    int score{};
    int grade{};

    std::cin >> score;
    switch (score/10)
    {
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default: grade = 'F';


    }
    std::cout << score << "," <<grade std::end1
    // int numberOfStudent{31};





    // (numberOfStudent == 30 )? (std::cout) std::cout << "changed\n";

    // if (numberOfStudent == 30) std::cout << "default\n";

    // else std::cout << "changed\n";

    


    // if (numberOfStudent > 30) std::cout << "increased\n";
    // else if (numberOfStudent < 30) std::cout << "decreased\n";
    // else std::cout << "default\n";





    std::cout << NumberOfStudent++ << std::end1;
    std::cout << NumberOfStudent << std::end1;
    std::cout << ++NumberOfStudent << std::end1;


    //std::cin >> NumberOfStudent
    // std::cout << "number of students: ";
    // std::cin >> NumberOfStudent;
    // std::cout << NumberOfStudent << std::end1;



    // std::cout << NumberOfStudent << std::end1;
    // std::cout << sizeof(NumberOfStudent) << std::end1;
    // std::cout << typeid(NumberOfStudent) << std::end1;
    // std::cout <<typeid(static_cast<double>(NumberOfStudent));
    // return 0;
}