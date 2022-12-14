/*
    Author : Pakshal Jain
    Date : 15/12/2022
    Program : To Print Below Pattern 
    Input : 5
    Output : * * * * * # # # # #

    Input : 6
    Output : * * * * * * # # # # # # #
    
    Input : -5
    Output : * * * * * # # # # #
    
    Input : 2
    Output : * * # #
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
import scala.io.StdIn.*;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration with Constructor of Class
class Pattern(var No : Int) 
{   
    //Behaviour of Class
    def display() = {
        var i : Int = 0;

        //Handeling Condition if Entered Number is Negative
        if(No < 0)
        {
            No  = -No;
        }

        //Logic
        for(i <- 0 to No - 1)
        {
            print("*\t");
        }

        for(i <- 0 to No - 1)
        {
            print("#\t");
        }
    }
}//End Of Class

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Object
object Display
{
    //Main Function
    def main(args : Array[String]) = {
        var No : Int = 0;

        println("Jay Ganesh....");

        //Taking Input From User
        println("Enter One Number");
        No = readInt();

        //Creating Object of Class
        var pobj = new Pattern(No);
        
        //Call To Behaviour of Class
        pobj.display();
    }
}