# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0xcc0cb270285032c3;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports

# Type definition
struct LaserEcho {
   echoes @0: List(Float32);
   
}
