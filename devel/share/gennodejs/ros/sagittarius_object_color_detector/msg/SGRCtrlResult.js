// Auto-generated. Do not edit!

// (in-package sagittarius_object_color_detector.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class SGRCtrlResult {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.result = null;
    }
    else {
      if (initObj.hasOwnProperty('result')) {
        this.result = initObj.result
      }
      else {
        this.result = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SGRCtrlResult
    // Serialize message field [result]
    bufferOffset = _serializer.uint8(obj.result, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SGRCtrlResult
    let len;
    let data = new SGRCtrlResult(null);
    // Deserialize message field [result]
    data.result = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 1;
  }

  static datatype() {
    // Returns string type for a message object
    return 'sagittarius_object_color_detector/SGRCtrlResult';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '6cd16eb95067452fc55413e9ecaf8f88';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # Define the result
    uint8 SUCCESS = 0
    uint8 ERROR = 1
    uint8 PREEMPT = 2
    uint8 PLAN_NOT_FOUND = 3
    uint8 GRASP_FAILD = 4 # 抓空
    
    # 执行结果
    uint8 result
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SGRCtrlResult(null);
    if (msg.result !== undefined) {
      resolved.result = msg.result;
    }
    else {
      resolved.result = 0
    }

    return resolved;
    }
};

// Constants for message
SGRCtrlResult.Constants = {
  SUCCESS: 0,
  ERROR: 1,
  PREEMPT: 2,
  PLAN_NOT_FOUND: 3,
  GRASP_FAILD: 4,
}

module.exports = SGRCtrlResult;
