#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rvr_msgs__msg__CommandVelocities
/// Command velocities for each wheel

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::CommandVelocities::default())
  }
}

impl rosidl_runtime_rs::Message for CommandVelocities {
  type RmwMsg = super::msg::rmw::CommandVelocities;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        v1: msg.v1,
        v2: msg.v2,
        v3: msg.v3,
        v4: msg.v4,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      v1: msg.v1,
      v2: msg.v2,
      v3: msg.v3,
      v4: msg.v4,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      v1: msg.v1,
      v2: msg.v2,
      v3: msg.v3,
      v4: msg.v4,
    }
  }
}


// Corresponds to rvr_msgs__msg__Vector3

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Vector3::default())
  }
}

impl rosidl_runtime_rs::Message for Vector3 {
  type RmwMsg = super::msg::rmw::Vector3;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        z: msg.z,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      z: msg.z,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      z: msg.z,
    }
  }
}


// Corresponds to rvr_msgs__msg__Wheel4

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Wheel4::default())
  }
}

impl rosidl_runtime_rs::Message for Wheel4 {
  type RmwMsg = super::msg::rmw::Wheel4;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        wheel1: msg.wheel1,
        wheel2: msg.wheel2,
        wheel3: msg.wheel3,
        wheel4: msg.wheel4,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      wheel1: msg.wheel1,
      wheel2: msg.wheel2,
      wheel3: msg.wheel3,
      wheel4: msg.wheel4,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      wheel1: msg.wheel1,
      wheel2: msg.wheel2,
      wheel3: msg.wheel3,
      wheel4: msg.wheel4,
    }
  }
}


// Corresponds to rvr_msgs__msg__RoverData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoverData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub d_wheel: super::msg::Wheel4,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v_wheel: super::msg::Wheel4,


    // This member is not documented.
    #[allow(missing_docs)]
    pub a_imu: super::msg::Vector3,


    // This member is not documented.
    #[allow(missing_docs)]
    pub w_imu: super::msg::Vector3,

}



impl Default for RoverData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoverData::default())
  }
}

impl rosidl_runtime_rs::Message for RoverData {
  type RmwMsg = super::msg::rmw::RoverData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        d_wheel: super::msg::Wheel4::into_rmw_message(std::borrow::Cow::Owned(msg.d_wheel)).into_owned(),
        v_wheel: super::msg::Wheel4::into_rmw_message(std::borrow::Cow::Owned(msg.v_wheel)).into_owned(),
        a_imu: super::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.a_imu)).into_owned(),
        w_imu: super::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.w_imu)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        d_wheel: super::msg::Wheel4::into_rmw_message(std::borrow::Cow::Borrowed(&msg.d_wheel)).into_owned(),
        v_wheel: super::msg::Wheel4::into_rmw_message(std::borrow::Cow::Borrowed(&msg.v_wheel)).into_owned(),
        a_imu: super::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.a_imu)).into_owned(),
        w_imu: super::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.w_imu)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      d_wheel: super::msg::Wheel4::from_rmw_message(msg.d_wheel),
      v_wheel: super::msg::Wheel4::from_rmw_message(msg.v_wheel),
      a_imu: super::msg::Vector3::from_rmw_message(msg.a_imu),
      w_imu: super::msg::Vector3::from_rmw_message(msg.w_imu),
    }
  }
}


// Corresponds to rvr_msgs__msg__PosData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PosData::default())
  }
}

impl rosidl_runtime_rs::Message for PosData {
  type RmwMsg = super::msg::rmw::PosData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
    }
  }
}


