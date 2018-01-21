# Step 5: Controlling color 

We've covered all the basics and got the core of our circuit built. Now it's time to start making our connected product: an ambient weather visualisation. 

Right now, we've got an LED in our circuit. But its only a single color and that's not ideal. The good news is that the Particle Photon has an in-built RGB led that's controlable.

We're going to use this _full color LED_ as the main feedback for our ambient weather viz! 

Oh and you might have wondered about the __ping-pong ball in your kits__. Try popping it over the LED on your Photon - you'll find it diffuses the light really nicely. 

## RGB LEDs

An ordinary LED has one light emitting component, _RGB LEDs have three_ - one which emits __red__ light (R) , one for __green__ light (G) and one for __blue__ (B). It works much like a pixel on your computer screen these three components combine to give us color. We can control their brightness separately to mix colors. For example, by turning on the Red and Green component we can yellow light while turning on the red and blue components we can get magenta. 

![Color Mixing - Image from Wikipedia](AdditiveColor.png)


## Particle RGB LED

Particle offers a library to control the RGB LED that’s built into the Particle board.

There are two main functions from a Library called LED that we’ll use. These are

- `RGB.control(true|false);` - lets us take control and return control of the RGB to the board / normal functions
- `RGB.color( r,g,b)` - allows us to set the color of the RGB led on the board.

In your code, start with an empty loop like so

````
void loop(){

}
````
__Note__ You might need to delete the existing loop because you can't have two in the same sketch!

By default, the RGB led on our board is used to give feedback on it's internet connection! First, we'll need to tell the Photon we want to take control of the LED and that it shouldn't show this information any more

Add this line to your loop

````
    // We need to say we'll be controlling the RGB led
    RGB.control(true);
````

Then let's experiment with making colors with our LED 
````
    RGB.color( 255,255,255);    // set it to white
		delay( 2000);						// wait 2 seconds
    RGB.color( 255,0,0);    // set it to red
		delay( 2000);						// wait 2 seconds
    RGB.color( 255,255,0);    // set it to yellow
		delay( 2000);						// wait 2 seconds
    RGB.color( 255,127,0);    // set it to orange
		delay( 2000);						// wait 2 seconds
    RGB.color( 255,0,255);    // set it to magenta
		delay( 2000);						// wait 2 seconds
    RGB.color( 0,255,0);    // set it to green
		delay( 2000);						// wait 2 seconds
    RGB.color( 0,255,0);    // set it to green
		delay( 2000);						// wait 2 seconds

````

Once you've made those changes, __save and flash your code__ (hit the lighting!) Don't forget to pop on your ping pong ball!

### Try it yourself

Experiment with these colors - they can be any where from 0 - 255 for each component. Try out a few variations 


