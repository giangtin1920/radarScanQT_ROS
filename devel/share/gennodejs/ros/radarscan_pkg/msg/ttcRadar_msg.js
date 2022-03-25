// Auto-generated. Do not edit!

// (in-package radarscan_pkg.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class ttcRadar_msg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.isObj = null;
      this.numObj = null;
      this.IdObj = null;
      this.isApproach = null;
      this.alpha = null;
      this.posX = null;
      this.posY = null;
      this.distance = null;
      this.velocity = null;
      this.ttc = null;
    }
    else {
      if (initObj.hasOwnProperty('isObj')) {
        this.isObj = initObj.isObj
      }
      else {
        this.isObj = 0;
      }
      if (initObj.hasOwnProperty('numObj')) {
        this.numObj = initObj.numObj
      }
      else {
        this.numObj = 0;
      }
      if (initObj.hasOwnProperty('IdObj')) {
        this.IdObj = initObj.IdObj
      }
      else {
        this.IdObj = [];
      }
      if (initObj.hasOwnProperty('isApproach')) {
        this.isApproach = initObj.isApproach
      }
      else {
        this.isApproach = [];
      }
      if (initObj.hasOwnProperty('alpha')) {
        this.alpha = initObj.alpha
      }
      else {
        this.alpha = [];
      }
      if (initObj.hasOwnProperty('posX')) {
        this.posX = initObj.posX
      }
      else {
        this.posX = [];
      }
      if (initObj.hasOwnProperty('posY')) {
        this.posY = initObj.posY
      }
      else {
        this.posY = [];
      }
      if (initObj.hasOwnProperty('distance')) {
        this.distance = initObj.distance
      }
      else {
        this.distance = [];
      }
      if (initObj.hasOwnProperty('velocity')) {
        this.velocity = initObj.velocity
      }
      else {
        this.velocity = [];
      }
      if (initObj.hasOwnProperty('ttc')) {
        this.ttc = initObj.ttc
      }
      else {
        this.ttc = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ttcRadar_msg
    // Serialize message field [isObj]
    bufferOffset = _serializer.uint8(obj.isObj, buffer, bufferOffset);
    // Serialize message field [numObj]
    bufferOffset = _serializer.uint8(obj.numObj, buffer, bufferOffset);
    // Serialize message field [IdObj]
    bufferOffset = _arraySerializer.uint8(obj.IdObj, buffer, bufferOffset, null);
    // Serialize message field [isApproach]
    bufferOffset = _arraySerializer.uint8(obj.isApproach, buffer, bufferOffset, null);
    // Serialize message field [alpha]
    bufferOffset = _arraySerializer.float32(obj.alpha, buffer, bufferOffset, null);
    // Serialize message field [posX]
    bufferOffset = _arraySerializer.float32(obj.posX, buffer, bufferOffset, null);
    // Serialize message field [posY]
    bufferOffset = _arraySerializer.float32(obj.posY, buffer, bufferOffset, null);
    // Serialize message field [distance]
    bufferOffset = _arraySerializer.float32(obj.distance, buffer, bufferOffset, null);
    // Serialize message field [velocity]
    bufferOffset = _arraySerializer.float32(obj.velocity, buffer, bufferOffset, null);
    // Serialize message field [ttc]
    bufferOffset = _arraySerializer.float32(obj.ttc, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ttcRadar_msg
    let len;
    let data = new ttcRadar_msg(null);
    // Deserialize message field [isObj]
    data.isObj = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [numObj]
    data.numObj = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [IdObj]
    data.IdObj = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [isApproach]
    data.isApproach = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [alpha]
    data.alpha = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [posX]
    data.posX = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [posY]
    data.posY = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [distance]
    data.distance = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [velocity]
    data.velocity = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [ttc]
    data.ttc = _arrayDeserializer.float32(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.IdObj.length;
    length += object.isApproach.length;
    length += 4 * object.alpha.length;
    length += 4 * object.posX.length;
    length += 4 * object.posY.length;
    length += 4 * object.distance.length;
    length += 4 * object.velocity.length;
    length += 4 * object.ttc.length;
    return length + 34;
  }

  static datatype() {
    // Returns string type for a message object
    return 'radarscan_pkg/ttcRadar_msg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'e70fde2e65a20687ebfaaed6f2f230ff';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 isObj
    uint8 numObj
    uint8[] IdObj
    uint8[] isApproach
    float32[] alpha
    float32[] posX
    float32[] posY
    float32[] distance
    float32[] velocity
    float32[] ttc
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ttcRadar_msg(null);
    if (msg.isObj !== undefined) {
      resolved.isObj = msg.isObj;
    }
    else {
      resolved.isObj = 0
    }

    if (msg.numObj !== undefined) {
      resolved.numObj = msg.numObj;
    }
    else {
      resolved.numObj = 0
    }

    if (msg.IdObj !== undefined) {
      resolved.IdObj = msg.IdObj;
    }
    else {
      resolved.IdObj = []
    }

    if (msg.isApproach !== undefined) {
      resolved.isApproach = msg.isApproach;
    }
    else {
      resolved.isApproach = []
    }

    if (msg.alpha !== undefined) {
      resolved.alpha = msg.alpha;
    }
    else {
      resolved.alpha = []
    }

    if (msg.posX !== undefined) {
      resolved.posX = msg.posX;
    }
    else {
      resolved.posX = []
    }

    if (msg.posY !== undefined) {
      resolved.posY = msg.posY;
    }
    else {
      resolved.posY = []
    }

    if (msg.distance !== undefined) {
      resolved.distance = msg.distance;
    }
    else {
      resolved.distance = []
    }

    if (msg.velocity !== undefined) {
      resolved.velocity = msg.velocity;
    }
    else {
      resolved.velocity = []
    }

    if (msg.ttc !== undefined) {
      resolved.ttc = msg.ttc;
    }
    else {
      resolved.ttc = []
    }

    return resolved;
    }
};

module.exports = ttcRadar_msg;
