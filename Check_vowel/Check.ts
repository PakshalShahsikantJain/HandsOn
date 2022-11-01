/*
    Autor : Pakshal Jain
    Date : 28/09/2022
    Program : TO Check Entered Character is Vowel or Not
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check
function Check(ch : any)
{
    //Logic To Check Entered Character is Vowel or Not
    if((ch == 'a')||(ch == 'e')||(ch == 'i')||(ch == 'o')||(ch == 'u'))
    {
        return true;
    }
    else if((ch == 'A')||(ch == 'E')||(ch == 'I')||(ch == 'O')||(ch == 'U'))
    {
        return true;
    }
    else 
    {
        return false;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function main() 
{
    var ch : any = 'o';
    var bret : boolean = false;

    console.log("Ganapati Bappa Morya");

    //Calling Check Function
    bret = Check(ch);

    if(bret == true)
    {
        console.log("Entered Character "+ ch + " is Vowel");
    }
    else 
    {
        console.log("Entered Character "+ ch +" is Not Vowel");
    }
}   
//Call To main function
main();