/*
    Author : Pakshal Jain
    Date : 18/01/2023
    Program : Accept number from user and display below pattern.
    
    Input : 5
    Output : A B C D E
*/

//Required Libraries
import scala.io.StdIn.*;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration With Characteristics of Class
class Display(No : Int) {

    //Behaviour of Class
    def Pattern() = {
        var i : Int = 0;
        var Sum : Int = 0;
        var Ch : String = " ";

        println("Printing Given Pattern : ");
        for(i <- 0 to No - 1)
        {
            Sum = i + 65;
            Ch = Sum.formatted("%c")
            print(Ch+"\t");
        }
    }    
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
object main {
    def main(args : Array[String]) = {
        var No : Int = 0;

        println("Jay Ganesh.....");

        //Taking Input From User
        println("Enter Number Till You Want To Print Pattern");
        No = readInt();

        //Creating object of Display Class
        var dobj = new Display(No);

        //Call To Behaviour of Class
        dobj.Pattern();
    }
}