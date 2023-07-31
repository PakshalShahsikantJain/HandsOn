/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept division of student from user and depends on the division
              display exam timing. There are 4 divisions in school as A,B,C,D. Exam
              of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
              (Application should be case insensitive)
            
              Input : C
              Output : Your exam at 9.20 AM
            
              Input : d
              Output : Your exam at 10.30 AM
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Exam Timing According To Division
function Display(ch : any) 
{
    var ascii : number = 0;

    if((ch >= 'a')&&(ch <= 'z')) 
    {
        ascii = ch.charCodeAt() - 32;
        ch = String.fromCharCode(ascii);
    }

    //Logic To Display Exam Timing 
    switch(ch) 
    {
        case 'A' : 
        {
            console.log("Exam is At 7 AM");
            break;
        }
        case 'B' :
        {
            console.log("Exam is At 8:30 AM");
            break;
        }
        case 'C' :
        {
            console.log("Exam is At 9:20 AM");
            break;
        }
        case 'D' :
        {
            console.log("Exam is At 10:30 AM");
            break;
        }
        default :
        {
            console.log("Invalid Division");
        }
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
function main() 
{
    var ch : any = 'A';

    console.log("Jay Ganesh.......");

    //Call To Display Function
    Display(ch);
}

main();