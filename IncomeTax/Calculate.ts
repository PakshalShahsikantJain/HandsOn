/*
	Author : Pakshal Shashikant Jain 
	Date : 02/06/2023
	Program : Design application for income tax department to calculate tax
			  amount. According to the income tax department there is no
			  income tax for the income less than 5 lakhs.

              If income is in between 5 to 10 lakhs then there will be 10% tax.

			  If income is in between 10 to 20 lakhs then there will be 20%
              tax.

  			  And for more than 20 lakhs there will be 30% tax.
			  We have to accept gross income from user and return the tax
			  amount.
*/

//Function To Calculate Income Tax
function IncomeTax(No : number)
{
    var ans : number = 0;

    //Handeling Condition if Entered Income Is less Than 5L
    if(No < 500000)
    {
        return ans;
    }
    //Handeling Condition if Entered Income is in Between 5L To 10L
    else if((No >= 500000)&&(No < 1000000))
    {
        ans = (No * 10) / 100;

        return ans;
    }
    //Handeling Condition is Entered Income is in Betweeen 10L To 20L
    else if((No >= 1000000)&&(No < 2000000))
    {
        ans = (No * 20) / 100;

        return ans;
    }
    //Handeling Condition if Entered income is Greater Than 20L
    else 
    {
        ans = (No * 30) / 100;
        return ans;
    }
}

//Main Function
function main() 
{
    var No : number = 0;
    var fret : number = 0;

    console.log("Jay Ganes.....");

    console.log("----------Marvellous Income Tax Calculator---------------");

    //Call To Income Tax Function
    fret = IncomeTax(No);

    console.log("You Have To Pay Taxable Amount of : %d₹",fret);
}

//Call To Main Function
main();