# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0xb9ed65b5313988e5;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports
using import "Header.capnp".Header;
using import "Vector3.capnp".Vector3;

# Type definition
struct BeelinerInfo {
   initAcceleration @0: Vector3;
   desiredVelocity @1: Vector3;
   needMultisegment @2: Bool;
   solveTime @3: Float64;
   initPosition @4: Vector3;
   finalVelocity @5: Vector3;
   trajectoryDuration @6: Float64;
   needBackup @7: Bool;
   finalAcceleration @8: Vector3;
   appendYawAtEnd @9: Bool;
   finalPosition @10: Vector3;
   header @11: Header;
   initYaw @12: Float64;
   finalYaw @13: Float64;
   startSolveTime @14: Float64;
   initVelocity @15: Vector3;
   isMultisegment @16: Bool;
   trajectoryStartTime @17: Float64;
   
}
