# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0x8228cfff703567e8;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports
using import "Header.capnp".Header;

# Type definition
struct DeltaPose2D {
   isKeyframe @0: Int8;
   covariance @1: List(Float64);
   header @2: Header;
   dx @3: Float64;
   dy @4: Float64;
   dpsi @5: Float64;
   
}
