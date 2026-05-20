#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rvr_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__CommandVelocities() -> *const std::ffi::c_void;
}

#[link(name = "rvr_msgs__rosidl_generator_c")]
extern "C" {
    fn rvr_msgs__msg__CommandVelocities__init(msg: *mut CommandVelocities) -> bool;
    fn rvr_msgs__msg__CommandVelocities__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CommandVelocities>, size: usize) -> bool;
    fn rvr_msgs__msg__CommandVelocities__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CommandVelocities>);
    fn rvr_msgs__msg__CommandVelocities__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CommandVelocities>, out_seq: *mut rosidl_runtime_rs::Sequence<CommandVelocities>) -> bool;
}

// Corresponds to rvr_msgs__msg__CommandVelocities
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Command velocities for each wheel

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CommandVelocities {

    // This member is not documented.
    #[allow(missing_docs)]
    pub v1: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v2: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v4: f32,

}



impl Default for CommandVelocities {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rvr_msgs__msg__CommandVelocities__init(&mut msg as *mut _) {
        panic!("Call to rvr_msgs__msg__CommandVelocities__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CommandVelocities {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__CommandVelocities__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__CommandVelocities__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__CommandVelocities__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CommandVelocities {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CommandVelocities where Self: Sized {
  const TYPE_NAME: &'static str = "rvr_msgs/msg/CommandVelocities";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__CommandVelocities() }
  }
}


#[link(name = "rvr_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__Vector3() -> *const std::ffi::c_void;
}

#[link(name = "rvr_msgs__rosidl_generator_c")]
extern "C" {
    fn rvr_msgs__msg__Vector3__init(msg: *mut Vector3) -> bool;
    fn rvr_msgs__msg__Vector3__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Vector3>, size: usize) -> bool;
    fn rvr_msgs__msg__Vector3__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Vector3>);
    fn rvr_msgs__msg__Vector3__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Vector3>, out_seq: *mut rosidl_runtime_rs::Sequence<Vector3>) -> bool;
}

// Corresponds to rvr_msgs__msg__Vector3
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vector3 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub z: f32,

}



impl Default for Vector3 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rvr_msgs__msg__Vector3__init(&mut msg as *mut _) {
        panic!("Call to rvr_msgs__msg__Vector3__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Vector3 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__Vector3__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__Vector3__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__Vector3__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Vector3 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Vector3 where Self: Sized {
  const TYPE_NAME: &'static str = "rvr_msgs/msg/Vector3";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__Vector3() }
  }
}


#[link(name = "rvr_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__Wheel4() -> *const std::ffi::c_void;
}

#[link(name = "rvr_msgs__rosidl_generator_c")]
extern "C" {
    fn rvr_msgs__msg__Wheel4__init(msg: *mut Wheel4) -> bool;
    fn rvr_msgs__msg__Wheel4__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Wheel4>, size: usize) -> bool;
    fn rvr_msgs__msg__Wheel4__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Wheel4>);
    fn rvr_msgs__msg__Wheel4__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Wheel4>, out_seq: *mut rosidl_runtime_rs::Sequence<Wheel4>) -> bool;
}

// Corresponds to rvr_msgs__msg__Wheel4
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Wheel4 {

    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel1: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel2: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel3: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wheel4: f32,

}



impl Default for Wheel4 {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rvr_msgs__msg__Wheel4__init(&mut msg as *mut _) {
        panic!("Call to rvr_msgs__msg__Wheel4__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Wheel4 {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__Wheel4__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__Wheel4__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__Wheel4__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Wheel4 {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Wheel4 where Self: Sized {
  const TYPE_NAME: &'static str = "rvr_msgs/msg/Wheel4";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__Wheel4() }
  }
}


#[link(name = "rvr_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__RoverData() -> *const std::ffi::c_void;
}

#[link(name = "rvr_msgs__rosidl_generator_c")]
extern "C" {
    fn rvr_msgs__msg__RoverData__init(msg: *mut RoverData) -> bool;
    fn rvr_msgs__msg__RoverData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RoverData>, size: usize) -> bool;
    fn rvr_msgs__msg__RoverData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RoverData>);
    fn rvr_msgs__msg__RoverData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RoverData>, out_seq: *mut rosidl_runtime_rs::Sequence<RoverData>) -> bool;
}

// Corresponds to rvr_msgs__msg__RoverData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub d_wheel: super::super::msg::rmw::Wheel4,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v_wheel: super::super::msg::rmw::Wheel4,


    // This member is not documented.
    #[allow(missing_docs)]
    pub a_imu: super::super::msg::rmw::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub w_imu: super::super::msg::rmw::Vector3,

}



impl Default for RoverData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rvr_msgs__msg__RoverData__init(&mut msg as *mut _) {
        panic!("Call to rvr_msgs__msg__RoverData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RoverData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__RoverData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__RoverData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__RoverData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RoverData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RoverData where Self: Sized {
  const TYPE_NAME: &'static str = "rvr_msgs/msg/RoverData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__RoverData() }
  }
}


#[link(name = "rvr_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__PosData() -> *const std::ffi::c_void;
}

#[link(name = "rvr_msgs__rosidl_generator_c")]
extern "C" {
    fn rvr_msgs__msg__PosData__init(msg: *mut PosData) -> bool;
    fn rvr_msgs__msg__PosData__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PosData>, size: usize) -> bool;
    fn rvr_msgs__msg__PosData__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PosData>);
    fn rvr_msgs__msg__PosData__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PosData>, out_seq: *mut rosidl_runtime_rs::Sequence<PosData>) -> bool;
}

// Corresponds to rvr_msgs__msg__PosData
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PosData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,

}



impl Default for PosData {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rvr_msgs__msg__PosData__init(&mut msg as *mut _) {
        panic!("Call to rvr_msgs__msg__PosData__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PosData {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__PosData__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__PosData__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rvr_msgs__msg__PosData__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PosData {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PosData where Self: Sized {
  const TYPE_NAME: &'static str = "rvr_msgs/msg/PosData";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rvr_msgs__msg__PosData() }
  }
}


