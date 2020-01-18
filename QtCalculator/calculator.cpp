#include "calculator.h"
#include "ui_calculator.h"

double currentCalcValue = 0.0;
bool divisionTrigger = false;
bool multiplicationTrigger = false;
bool additionTrigger = false;
bool subtractionTrigger = false;

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->DisplayScreen->setText(QString::number(currentCalcValue));
    QPushButton *numberButtons[10];
    for(int i = 0; i < 10; i++){
        QString buttonName = "Button" + QString::number(i);
        numberButtons[i] = Calculator::findChild<QPushButton *>(buttonName);
        connect(numberButtons[i], SIGNAL(released()), this, SLOT(NumberPressed()));
    }

    connect(ui->Addition, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Subtraction, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Multiplication, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Division, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Equals, SIGNAL(released()), this, SLOT(EqualButtonPressed()));
    connect(ui->SignChange, SIGNAL(released()), this, SLOT(NumberSignChange()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumberPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString buttonValue = button->text();
    QString displayValue = ui->DisplayScreen->text();
    if((displayValue.toDouble() ==0) || (displayValue.toDouble() == 0.0)){
        ui->DisplayScreen->setText(buttonValue);
    } else {
        QString newValue = displayValue + buttonValue;
        double doubleNewValue = newValue.toDouble();
        ui->DisplayScreen->setText(QString::number(doubleNewValue, 'g', 16));
    }
}

void Calculator::MathButtonPressed(){

    // Cancel out previous math button clicks
    divisionTrigger = false;
    multiplicationTrigger = false;
    additionTrigger = false;
    subtractionTrigger = false;

    // Store current value in DisplayScreen
    QString displayValue = ui->DisplayScreen->text();
    currentCalcValue = displayValue.toDouble();

    // Sender returns a pointer to the button pressed
    QPushButton *button = (QPushButton *)sender();

    // Get math symbol on the button
    QString buttonValue = button->text();

    if(QString::compare(buttonValue, "/", Qt::CaseInsensitive) == 0){
        divisionTrigger = true;
    } else if(QString::compare(buttonValue, "*", Qt::CaseInsensitive) == 0){
        multiplicationTrigger = true;
    } else if(QString::compare(buttonValue, "+", Qt::CaseInsensitive) == 0){
        additionTrigger = true;
    } else {
        subtractionTrigger = true;
    }

    // Clear display
    ui->DisplayScreen->setText("");

}

void Calculator::EqualButtonPressed(){

    // Holds new calculation
    double result = 0.0;

    // Get value in display
    QString displayValue = ui->DisplayScreen->text();
    double doubleDisplayValue = displayValue.toDouble();

    // Make sure a math button was pressed
    if(additionTrigger || subtractionTrigger || multiplicationTrigger || divisionTrigger ){
        if(additionTrigger){
            result = currentCalcValue + doubleDisplayValue;
        } else if(subtractionTrigger){
            result = currentCalcValue - doubleDisplayValue;
        } else if(multiplicationTrigger){
            result = currentCalcValue * doubleDisplayValue;
        } else {
            result = currentCalcValue / doubleDisplayValue;
        }
    }

    // Put solution in display
    ui->DisplayScreen->setText(QString::number(result));

}

void Calculator::NumberSignChange(){

    // Get the value in the display
    QString displayValue = ui->DisplayScreen->text();

    // Regular expression checks if it is a number
    // plus sign
    QRegExp reg("[-+]?[0-9.]*");

    // If it is a number change the sign
    if(reg.exactMatch(displayValue)){
        double doubleDisplayValue = displayValue.toDouble();
        double doubleDisplayValueSign = -1 * doubleDisplayValue;

        // Put solution in display
        ui->DisplayScreen->setText(QString::number(doubleDisplayValueSign));
    }

}
