; Auto-generated. Do not edit!


(cl:in-package sagittarius_object_color_detector-msg)


;//! \htmlinclude SGRCtrlFeedback.msg.html

(cl:defclass <SGRCtrlFeedback> (roslisp-msg-protocol:ros-message)
  ((step
    :reader step
    :initarg :step
    :type cl:fixnum
    :initform 0))
)

(cl:defclass SGRCtrlFeedback (<SGRCtrlFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <SGRCtrlFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'SGRCtrlFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name sagittarius_object_color_detector-msg:<SGRCtrlFeedback> is deprecated: use sagittarius_object_color_detector-msg:SGRCtrlFeedback instead.")))

(cl:ensure-generic-function 'step-val :lambda-list '(m))
(cl:defmethod step-val ((m <SGRCtrlFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader sagittarius_object_color_detector-msg:step-val is deprecated.  Use sagittarius_object_color_detector-msg:step instead.")
  (step m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<SGRCtrlFeedback>)))
    "Constants for message type '<SGRCtrlFeedback>"
  '((:PLANNING . 0)
    (:EXEC_POSITION . 1)
    (:EXEC_GRASP . 2))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'SGRCtrlFeedback)))
    "Constants for message type 'SGRCtrlFeedback"
  '((:PLANNING . 0)
    (:EXEC_POSITION . 1)
    (:EXEC_GRASP . 2))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <SGRCtrlFeedback>) ostream)
  "Serializes a message object of type '<SGRCtrlFeedback>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'step)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <SGRCtrlFeedback>) istream)
  "Deserializes a message object of type '<SGRCtrlFeedback>"
    (cl:setf (cl:ldb (cl:byte 8 0) (cl:slot-value msg 'step)) (cl:read-byte istream))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<SGRCtrlFeedback>)))
  "Returns string type for a message object of type '<SGRCtrlFeedback>"
  "sagittarius_object_color_detector/SGRCtrlFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'SGRCtrlFeedback)))
  "Returns string type for a message object of type 'SGRCtrlFeedback"
  "sagittarius_object_color_detector/SGRCtrlFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<SGRCtrlFeedback>)))
  "Returns md5sum for a message object of type '<SGRCtrlFeedback>"
  "16415215c939077a0b815877705c9bee")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'SGRCtrlFeedback)))
  "Returns md5sum for a message object of type 'SGRCtrlFeedback"
  "16415215c939077a0b815877705c9bee")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<SGRCtrlFeedback>)))
  "Returns full string definition for message of type '<SGRCtrlFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define a feedback message~%uint8 PLANNING = 0~%uint8 EXEC_POSITION = 1~%uint8 EXEC_GRASP = 2~%~%# 当前步骤~%uint8 step~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'SGRCtrlFeedback)))
  "Returns full string definition for message of type 'SGRCtrlFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define a feedback message~%uint8 PLANNING = 0~%uint8 EXEC_POSITION = 1~%uint8 EXEC_GRASP = 2~%~%# 当前步骤~%uint8 step~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <SGRCtrlFeedback>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <SGRCtrlFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'SGRCtrlFeedback
    (cl:cons ':step (step msg))
))
