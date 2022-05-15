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
      this.numObj = null;
      this.IdObj = null;
      this.isApproach = null;
      this.alpha = null;
      this.posX = null;
      this.posY = null;
      this.dis = null;
      this.vel = null;
      this.ttc = null;
      this.safetyZone = null;
      this.ptX = null;
      this.ptY = null;
      this.ptZ = null;
      this.ttcSpeed = null;
      this.ttcSteering = null;
      this.ttcKey = null;
      this.msg_counter = null;
      this.isObject = null;
      this.distance = null;
    }
    else {
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
      if (initObj.hasOwnProperty('dis')) {
        this.dis = initObj.dis
      }
      else {
        this.dis = [];
      }
      if (initObj.hasOwnProperty('vel')) {
        this.vel = initObj.vel
      }
      else {
        this.vel = [];
      }
      if (initObj.hasOwnProperty('ttc')) {
        this.ttc = initObj.ttc
      }
      else {
        this.ttc = [];
      }
      if (initObj.hasOwnProperty('safetyZone')) {
        this.safetyZone = initObj.safetyZone
      }
      else {
        this.safetyZone = [];
      }
      if (initObj.hasOwnProperty('ptX')) {
        this.ptX = initObj.ptX
      }
      else {
        this.ptX = [];
      }
      if (initObj.hasOwnProperty('ptY')) {
        this.ptY = initObj.ptY
      }
      else {
        this.ptY = [];
      }
      if (initObj.hasOwnProperty('ptZ')) {
        this.ptZ = initObj.ptZ
      }
      else {
        this.ptZ = [];
      }
      if (initObj.hasOwnProperty('ttcSpeed')) {
        this.ttcSpeed = initObj.ttcSpeed
      }
      else {
        this.ttcSpeed = 0.0;
      }
      if (initObj.hasOwnProperty('ttcSteering')) {
        this.ttcSteering = initObj.ttcSteering
      }
      else {
        this.ttcSteering = 0.0;
      }
      if (initObj.hasOwnProperty('ttcKey')) {
        this.ttcKey = initObj.ttcKey
      }
      else {
        this.ttcKey = '';
      }
      if (initObj.hasOwnProperty('msg_counter')) {
        this.msg_counter = initObj.msg_counter
      }
      else {
        this.msg_counter = 0;
      }
      if (initObj.hasOwnProperty('isObject')) {
        this.isObject = initObj.isObject
      }
      else {
        this.isObject = false;
      }
      if (initObj.hasOwnProperty('distance')) {
        this.distance = initObj.distance
      }
      else {
        this.distance = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ttcRadar_msg
    // Serialize message field [numObj]
    bufferOffset = _serializer.uint8(obj.numObj, buffer, bufferOffset);
    // Serialize message field [IdObj]
    bufferOffset = _arraySerializer.uint8(obj.IdObj, buffer, bufferOffset, null);
    // Serialize message field [isApproach]
    bufferOffset = _arraySerializer.bool(obj.isApproach, buffer, bufferOffset, null);
    // Serialize message field [alpha]
    bufferOffset = _arraySerializer.float32(obj.alpha, buffer, bufferOffset, null);
    // Serialize message field [posX]
    bufferOffset = _arraySerializer.float32(obj.posX, buffer, bufferOffset, null);
    // Serialize message field [posY]
    bufferOffset = _arraySerializer.float32(obj.posY, buffer, bufferOffset, null);
    // Serialize message field [dis]
    bufferOffset = _arraySerializer.float32(obj.dis, buffer, bufferOffset, null);
    // Serialize message field [vel]
    bufferOffset = _arraySerializer.float32(obj.vel, buffer, bufferOffset, null);
    // Serialize message field [ttc]
    bufferOffset = _arraySerializer.float32(obj.ttc, buffer, bufferOffset, null);
    // Serialize message field [safetyZone]
    bufferOffset = _arraySerializer.string(obj.safetyZone, buffer, bufferOffset, null);
    // Serialize message field [ptX]
    bufferOffset = _arraySerializer.float32(obj.ptX, buffer, bufferOffset, null);
    // Serialize message field [ptY]
    bufferOffset = _arraySerializer.float32(obj.ptY, buffer, bufferOffset, null);
    // Serialize message field [ptZ]
    bufferOffset = _arraySerializer.float32(obj.ptZ, buffer, bufferOffset, null);
    // Serialize message field [ttcSpeed]
    bufferOffset = _serializer.float32(obj.ttcSpeed, buffer, bufferOffset);
    // Serialize message field [ttcSteering]
    bufferOffset = _serializer.float32(obj.ttcSteering, buffer, bufferOffset);
    // Serialize message field [ttcKey]
    bufferOffset = _serializer.string(obj.ttcKey, buffer, bufferOffset);
    // Serialize message field [msg_counter]
    bufferOffset = _serializer.uint32(obj.msg_counter, buffer, bufferOffset);
    // Serialize message field [isObject]
    bufferOffset = _serializer.bool(obj.isObject, buffer, bufferOffset);
    // Serialize message field [distance]
    bufferOffset = _serializer.float32(obj.distance, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ttcRadar_msg
    let len;
    let data = new ttcRadar_msg(null);
    // Deserialize message field [numObj]
    data.numObj = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [IdObj]
    data.IdObj = _arrayDeserializer.uint8(buffer, bufferOffset, null)
    // Deserialize message field [isApproach]
    data.isApproach = _arrayDeserializer.bool(buffer, bufferOffset, null)
    // Deserialize message field [alpha]
    data.alpha = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [posX]
    data.posX = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [posY]
    data.posY = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [dis]
    data.dis = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [vel]
    data.vel = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [ttc]
    data.ttc = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [safetyZone]
    data.safetyZone = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [ptX]
    data.ptX = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [ptY]
    data.ptY = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [ptZ]
    data.ptZ = _arrayDeserializer.float32(buffer, bufferOffset, null)
    // Deserialize message field [ttcSpeed]
    data.ttcSpeed = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [ttcSteering]
    data.ttcSteering = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [ttcKey]
    data.ttcKey = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [msg_counter]
    data.msg_counter = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [isObject]
    data.isObject = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [distance]
    data.distance = _deserializer.float32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.IdObj.length;
    length += object.isApproach.length;
    length += 4 * object.alpha.length;
    length += 4 * object.posX.length;
    length += 4 * object.posY.length;
    length += 4 * object.dis.length;
    length += 4 * object.vel.length;
    length += 4 * object.ttc.length;
    object.safetyZone.forEach((val) => {
      length += 4 + val.length;
    });
    length += 4 * object.ptX.length;
    length += 4 * object.ptY.length;
    length += 4 * object.ptZ.length;
    length += object.ttcKey.length;
    return length + 70;
  }

  static datatype() {
    // Returns string type for a message object
    return 'radarscan_pkg/ttcRadar_msg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '4ae422de06917b166d8b65b9c0eee85f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint8 numObj
    uint8[] IdObj
    bool[] isApproach
    float32[] alpha
    float32[] posX
    float32[] posY
    float32[] dis
    float32[] vel
    float32[] ttc
    string[] safetyZone
    float32[] ptX
    float32[] ptY
    float32[] ptZ
    
    float32 ttcSpeed
    float32 ttcSteering
    string ttcKey
    
    uint32 msg_counter
    bool isObject
    float32 distance
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ttcRadar_msg(null);
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

    if (msg.dis !== undefined) {
      resolved.dis = msg.dis;
    }
    else {
      resolved.dis = []
    }

    if (msg.vel !== undefined) {
      resolved.vel = msg.vel;
    }
    else {
      resolved.vel = []
    }

    if (msg.ttc !== undefined) {
      resolved.ttc = msg.ttc;
    }
    else {
      resolved.ttc = []
    }

    if (msg.safetyZone !== undefined) {
      resolved.safetyZone = msg.safetyZone;
    }
    else {
      resolved.safetyZone = []
    }

    if (msg.ptX !== undefined) {
      resolved.ptX = msg.ptX;
    }
    else {
      resolved.ptX = []
    }

    if (msg.ptY !== undefined) {
      resolved.ptY = msg.ptY;
    }
    else {
      resolved.ptY = []
    }

    if (msg.ptZ !== undefined) {
      resolved.ptZ = msg.ptZ;
    }
    else {
      resolved.ptZ = []
    }

    if (msg.ttcSpeed !== undefined) {
      resolved.ttcSpeed = msg.ttcSpeed;
    }
    else {
      resolved.ttcSpeed = 0.0
    }

    if (msg.ttcSteering !== undefined) {
      resolved.ttcSteering = msg.ttcSteering;
    }
    else {
      resolved.ttcSteering = 0.0
    }

    if (msg.ttcKey !== undefined) {
      resolved.ttcKey = msg.ttcKey;
    }
    else {
      resolved.ttcKey = ''
    }

    if (msg.msg_counter !== undefined) {
      resolved.msg_counter = msg.msg_counter;
    }
    else {
      resolved.msg_counter = 0
    }

    if (msg.isObject !== undefined) {
      resolved.isObject = msg.isObject;
    }
    else {
      resolved.isObject = false
    }

    if (msg.distance !== undefined) {
      resolved.distance = msg.distance;
    }
    else {
      resolved.distance = 0.0
    }

    return resolved;
    }
};

module.exports = ttcRadar_msg;
