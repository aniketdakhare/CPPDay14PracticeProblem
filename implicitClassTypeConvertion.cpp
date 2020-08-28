#include <iostream>

using namespace std;

class MarkSheet
{
    public:
        int englishMark;
        int mathsMark;
        int scienceMark;

        MarkSheet(int englishMark, int mathsMark, int scienceMark)
        {
            this->englishMark = englishMark;
            this->mathsMark = mathsMark;
            this->scienceMark = scienceMark;
        }

        void displayMarkSheet()
        {
            cout << "\nMarks in English: " << englishMark << "\nMarks in Math: " << mathsMark << "\nMarks in Science: " << scienceMark << endl;
        }
};

class Math
{
    public:
        int mathsMark;

        Math(MarkSheet& markSheet)
        {
            this->mathsMark = markSheet.mathsMark;
        }

        Math& operator = (const MarkSheet& marks)
        {
            this->mathsMark = (marks.mathsMark - 20);
            return *this;
        }

        operator MarkSheet()
        {
            return MarkSheet(0, this->mathsMark, 0);
        }

        void displayMathsMark()
        {
            cout << "\nMarks in Math: " << mathsMark << endl;
        }
};

int main()
{
    MarkSheet markSheet(85, 99, 97);
    markSheet.displayMarkSheet();

    Math math = markSheet;
    math.displayMathsMark();

    math = markSheet;
    math.displayMathsMark();

    markSheet = math;
    markSheet.displayMarkSheet();
}