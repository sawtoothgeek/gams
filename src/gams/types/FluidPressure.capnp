# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0xa74adb47a1b2335f;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports
using import "Header.capnp".Header;

# Type definition
struct FluidPressure {
   fluidPressure @0: Float64;
   header @1: Header;
   variance @2: Float64;
   
}
