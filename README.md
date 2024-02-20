# ArduinoMorse

An Arduino library to convert a String into a morse code signal to be sent on a pin.

## Why this library

On 19 February 2024, I had to debug a program on an Arduino UNO. However, the Serial was already occupied in the trasmission of messages to another Arduino UNO,
so I couldn't just use the Serial Monitor on the Arduino IDE and plot some fancy strings. So, I decided to drive the pin 13 led to create simple "yes" and "no"
in morse code, but then the insitnct to build something cooler and more general took over. Now, this libary can convert any aplhanumerical string into a morse
sequence transmittable on any pin.

## Usage

Include the file `morse.h` in your project.
This file consists in a `Morse` class composed of attributes and methods that are all static, hence accessible without any object instantiation.
The `Morse::pin` attribute represents the pin where your morse code will be sent (default pin 13 led), while `Morse::time_unit` is the duration of a dot
(default 100 ms). Other durations are derived following the standard rule:

- intra-symbol pause = dot duration
- intra-letter pause = dash duration = 3 \* dot duration
- intra-word pause = halt duration = 7 \* dot duration

**Important: the Morse class does not configure the pin, so be sure to to use pinMode yourself before using the methos of this class.**

`Morse::plot_char` and `Morse::plot_string` are the core functions. The former converts its input char into a morse signal and sends it to
the pin identified by `Morse::pin`, while the the latter does so for an entire string. Both std::string and C-style strings are handled.
There's no difference between uppercase and lowercase letters, and any simbol that is not an aphanumerical or a space will simply be ignored.

The functions from `Morse::a` to `Morse::z` can be used to directly produce the corrispondet letter (intra-letter space included), and are the building
blocks of the previous methods. Same for `Morse::zero` to `Morse::nine`. For an even finer control, you can also use the following:

- `Morse::dot`: produces a morse dot followed by an intra-symbol pause.
- `Morse::dash`: produces a morse dash followed by an intra-symbol pause.
- `Morse::pause`: produces an intra-letter pause.
- `Morse::space`: produces an intra-word pause, i.e. a space.
- `Morse::halt`: produces the halt symbol, i.e. the long sound that decretes the end of the transmission.

Again, all these functions will output on `Morse::pin`.

## Picture

This repository also includes a picure to explain the Morse code, taken by Wikipedia.
It's source is: <https://commons.wikimedia.org/wiki/File:International_Morse_Code.svg>

## Maintainer

*Alex Pegoraro*
