# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from dji_osdk_ros/WaypointV2CameraActuator.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import dji_osdk_ros.msg

class WaypointV2CameraActuator(genpy.Message):
  _md5sum = "70a055c9fb9f49f67d8f5bf884fe592d"
  _type = "dji_osdk_ros/WaypointV2CameraActuator"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This determines how the camera will be performed when a waypoint mission is executing.
#constant for DJIWaypointV2ActionActuatorCameraOperationType
# Starts to shoot a photo.
uint16 DJIWaypointV2ActionActuatorCameraOperationTypeTakePhoto = 1
# Starts to record a video.
uint16 DJIWaypointV2ActionActuatorCameraOperationTypeStartRecordVideo = 2
# Stops to record a video.
uint16 DJIWaypointV2ActionActuatorCameraOperationTypeStopRecordVideo = 3
# Starts focus.
uint16 DJIWaypointV2ActionActuatorCameraOperationTypeFocus = 4
# Starts focal lenth. Only support those support flocal lenth cameras.
uint16 DJIWaypointV2ActionActuatorCameraOperationTypeFocalLength = 5

uint16 actuatorIndex   # The index of actuator. It is valid when the diagnostics is related
                      # to camera or gimbal and the connected product has multiple gimbals and cameras.

uint16 DJIWaypointV2ActionActuatorCameraOperationType
# you can only choose one to config.
WaypointV2CameraActuatorFocusParam focusParam  # The parameters for camera focus operation. It is valid only when
                                       # ``DJIWaypointV2Action_DJIWaypointV2CameraActuatorParam_operationType`` is
                                       # ``DJIWaypointV2MissionV2_DJIWaypointV2ActionActuatorCameraOperationType_Focus``
WaypointV2CameraActuatorFocalLengthParam zoomParam # The parameters for camera focus length operation. It is valid only when
                                           # ``DJIWaypointV2Action_DJIWaypointV2CameraActuatorParam_operationType`` is
                                           # ``DJIWaypointV2MissionV2_DJIWaypointV2ActionActuatorCameraOperationType_FocalLength``
================================================================================
MSG: dji_osdk_ros/WaypointV2CameraActuatorFocusParam
# This class defines a camera focus operation for ``DJIWaypointV2Action_DJIWaypointV2CameraActuatorParam``.
# The lens focus target point. When the focus mode is auto, the target point
# is the focal point. When the focus mode is manual, the target point is the zoom
# out area if the focus assistant is enabled for the manual mode.
#  The range for x and y is from 0.0 to 1.0. The point [0.0, 0.0] represents the top-left angle of the screen.
  
  float32 x # x axis focus point value.range: [0,1]
  float32 y # y axis focus point value.range: [0,1]
  uint8 regionType #focus type:0:point focus,1:rectangle focus
  float32 width #Normalized focus area width(0,1)
  float32 height # Normalized focus area height(0,1)
  uint8 retryTimes = 1
================================================================================
MSG: dji_osdk_ros/WaypointV2CameraActuatorFocalLengthParam
# This class defines a camera focal length operation for  ``DJIWaypointV2Action_DJIWaypointV2CameraActuatorParam``.
# Focal length of zoom lens. Valid range is [``DJICamera_DJICameraOpticalZoomSpec_minFocalLength``,
# ``DJICamera_DJICameraOpticalZoomSpec_minFocalLength``] and must be a multiple of
# ``DJICamera_DJICameraOpticalZoomSpec_focalLengthStep``.
#  Only support by those camera ``DJICamera_CameraSettings_isOpticalZoomSupported`` return ``TRUE``.
  uint16 focalLength

  uint8 retryTimes = 1"""
  # Pseudo-constants
  DJIWaypointV2ActionActuatorCameraOperationTypeTakePhoto = 1
  DJIWaypointV2ActionActuatorCameraOperationTypeStartRecordVideo = 2
  DJIWaypointV2ActionActuatorCameraOperationTypeStopRecordVideo = 3
  DJIWaypointV2ActionActuatorCameraOperationTypeFocus = 4
  DJIWaypointV2ActionActuatorCameraOperationTypeFocalLength = 5

  __slots__ = ['actuatorIndex','DJIWaypointV2ActionActuatorCameraOperationType','focusParam','zoomParam']
  _slot_types = ['uint16','uint16','dji_osdk_ros/WaypointV2CameraActuatorFocusParam','dji_osdk_ros/WaypointV2CameraActuatorFocalLengthParam']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       actuatorIndex,DJIWaypointV2ActionActuatorCameraOperationType,focusParam,zoomParam

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WaypointV2CameraActuator, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.actuatorIndex is None:
        self.actuatorIndex = 0
      if self.DJIWaypointV2ActionActuatorCameraOperationType is None:
        self.DJIWaypointV2ActionActuatorCameraOperationType = 0
      if self.focusParam is None:
        self.focusParam = dji_osdk_ros.msg.WaypointV2CameraActuatorFocusParam()
      if self.zoomParam is None:
        self.zoomParam = dji_osdk_ros.msg.WaypointV2CameraActuatorFocalLengthParam()
    else:
      self.actuatorIndex = 0
      self.DJIWaypointV2ActionActuatorCameraOperationType = 0
      self.focusParam = dji_osdk_ros.msg.WaypointV2CameraActuatorFocusParam()
      self.zoomParam = dji_osdk_ros.msg.WaypointV2CameraActuatorFocalLengthParam()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2H2fB2fH().pack(_x.actuatorIndex, _x.DJIWaypointV2ActionActuatorCameraOperationType, _x.focusParam.x, _x.focusParam.y, _x.focusParam.regionType, _x.focusParam.width, _x.focusParam.height, _x.zoomParam.focalLength))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.focusParam is None:
        self.focusParam = dji_osdk_ros.msg.WaypointV2CameraActuatorFocusParam()
      if self.zoomParam is None:
        self.zoomParam = dji_osdk_ros.msg.WaypointV2CameraActuatorFocalLengthParam()
      end = 0
      _x = self
      start = end
      end += 23
      (_x.actuatorIndex, _x.DJIWaypointV2ActionActuatorCameraOperationType, _x.focusParam.x, _x.focusParam.y, _x.focusParam.regionType, _x.focusParam.width, _x.focusParam.height, _x.zoomParam.focalLength,) = _get_struct_2H2fB2fH().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2H2fB2fH().pack(_x.actuatorIndex, _x.DJIWaypointV2ActionActuatorCameraOperationType, _x.focusParam.x, _x.focusParam.y, _x.focusParam.regionType, _x.focusParam.width, _x.focusParam.height, _x.zoomParam.focalLength))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.focusParam is None:
        self.focusParam = dji_osdk_ros.msg.WaypointV2CameraActuatorFocusParam()
      if self.zoomParam is None:
        self.zoomParam = dji_osdk_ros.msg.WaypointV2CameraActuatorFocalLengthParam()
      end = 0
      _x = self
      start = end
      end += 23
      (_x.actuatorIndex, _x.DJIWaypointV2ActionActuatorCameraOperationType, _x.focusParam.x, _x.focusParam.y, _x.focusParam.regionType, _x.focusParam.width, _x.focusParam.height, _x.zoomParam.focalLength,) = _get_struct_2H2fB2fH().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2H2fB2fH = None
def _get_struct_2H2fB2fH():
    global _struct_2H2fB2fH
    if _struct_2H2fB2fH is None:
        _struct_2H2fB2fH = struct.Struct("<2H2fB2fH")
    return _struct_2H2fB2fH
