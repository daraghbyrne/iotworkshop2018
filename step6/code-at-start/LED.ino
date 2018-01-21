// Define a pin we'll place an LED on
int ledPin = D0;

// Our button wired to D0
int buttonPin = D1;

// Define a pin that we'll place the pot on
int potPin = A0;

// Create a variable to hold the pot reading
int potReading = 0;


void setup()
{
  // Set up the LED for output
  pinMode(ledPin, OUTPUT);

  // For input, we define the
  // pushbutton as an input-pullup
  // this uses an internal pullup resistor
  // to manage consistent reads from the device

  pinMode( buttonPin , INPUT_PULLUP); // sets pin as input

  // Create a cloud variable of type integer
  // called 'dial' mapped to potReading

  Particle.variable("dial", &potReading, INT);

	
}

void loop()
{


}
