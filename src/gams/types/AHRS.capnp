# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0xed13314ca2885381;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports
using import "Header.capnp".Header;
using import "Quaternion.capnp".Quaternion;
using import "Vector3.capnp".Vector3;

# Type definition
struct AHRS {
   header @0: Header;
   rateBias @1: Vector3;
   angularVelocity @2: Vector3;
   orientation @3: Quaternion;
   magHeading @4: Float32;
   
}
