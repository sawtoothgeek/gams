# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0xe4c8cf0fdbb3f682;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports
using import "Vector3.capnp".Vector3;

# Type definition
struct Twist {
   linear @0: Vector3;
   angular @1: Vector3;
   
}
