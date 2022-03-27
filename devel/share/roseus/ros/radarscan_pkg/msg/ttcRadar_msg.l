;; Auto-generated. Do not edit!


(when (boundp 'radarscan_pkg::ttcRadar_msg)
  (if (not (find-package "RADARSCAN_PKG"))
    (make-package "RADARSCAN_PKG"))
  (shadow 'ttcRadar_msg (find-package "RADARSCAN_PKG")))
(unless (find-package "RADARSCAN_PKG::TTCRADAR_MSG")
  (make-package "RADARSCAN_PKG::TTCRADAR_MSG"))

(in-package "ROS")
;;//! \htmlinclude ttcRadar_msg.msg.html


(defclass radarscan_pkg::ttcRadar_msg
  :super ros::object
  :slots (_numObj _IdObj _isApproach _alpha _posX _posY _dis _vel _ttc _safetyZone _msg_counter _isObject _distance ))

(defmethod radarscan_pkg::ttcRadar_msg
  (:init
   (&key
    ((:numObj __numObj) 0)
    ((:IdObj __IdObj) (make-array 0 :initial-element 0 :element-type :char))
    ((:isApproach __isApproach) (let (r) (dotimes (i 0) (push nil r)) r))
    ((:alpha __alpha) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:posX __posX) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:posY __posY) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:dis __dis) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:vel __vel) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:ttc __ttc) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:safetyZone __safetyZone) (let (r) (dotimes (i 0) (push "" r)) r))
    ((:msg_counter __msg_counter) 0)
    ((:isObject __isObject) nil)
    ((:distance __distance) 0.0)
    )
   (send-super :init)
   (setq _numObj (round __numObj))
   (setq _IdObj __IdObj)
   (setq _isApproach __isApproach)
   (setq _alpha __alpha)
   (setq _posX __posX)
   (setq _posY __posY)
   (setq _dis __dis)
   (setq _vel __vel)
   (setq _ttc __ttc)
   (setq _safetyZone __safetyZone)
   (setq _msg_counter (round __msg_counter))
   (setq _isObject __isObject)
   (setq _distance (float __distance))
   self)
  (:numObj
   (&optional __numObj)
   (if __numObj (setq _numObj __numObj)) _numObj)
  (:IdObj
   (&optional __IdObj)
   (if __IdObj (setq _IdObj __IdObj)) _IdObj)
  (:isApproach
   (&optional __isApproach)
   (if __isApproach (setq _isApproach __isApproach)) _isApproach)
  (:alpha
   (&optional __alpha)
   (if __alpha (setq _alpha __alpha)) _alpha)
  (:posX
   (&optional __posX)
   (if __posX (setq _posX __posX)) _posX)
  (:posY
   (&optional __posY)
   (if __posY (setq _posY __posY)) _posY)
  (:dis
   (&optional __dis)
   (if __dis (setq _dis __dis)) _dis)
  (:vel
   (&optional __vel)
   (if __vel (setq _vel __vel)) _vel)
  (:ttc
   (&optional __ttc)
   (if __ttc (setq _ttc __ttc)) _ttc)
  (:safetyZone
   (&optional __safetyZone)
   (if __safetyZone (setq _safetyZone __safetyZone)) _safetyZone)
  (:msg_counter
   (&optional __msg_counter)
   (if __msg_counter (setq _msg_counter __msg_counter)) _msg_counter)
  (:isObject
   (&optional __isObject)
   (if __isObject (setq _isObject __isObject)) _isObject)
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:serialization-length
   ()
   (+
    ;; uint8 _numObj
    1
    ;; uint8[] _IdObj
    (* 1    (length _IdObj)) 4
    ;; bool[] _isApproach
    (* 1    (length _isApproach)) 4
    ;; float32[] _alpha
    (* 4    (length _alpha)) 4
    ;; float32[] _posX
    (* 4    (length _posX)) 4
    ;; float32[] _posY
    (* 4    (length _posY)) 4
    ;; float32[] _dis
    (* 4    (length _dis)) 4
    ;; float32[] _vel
    (* 4    (length _vel)) 4
    ;; float32[] _ttc
    (* 4    (length _ttc)) 4
    ;; string[] _safetyZone
    (apply #'+ (mapcar #'(lambda (x) (+ 4 (length x))) _safetyZone)) 4
    ;; uint32 _msg_counter
    4
    ;; bool _isObject
    1
    ;; float32 _distance
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _numObj
       (write-byte _numObj s)
     ;; uint8[] _IdObj
     (write-long (length _IdObj) s)
     (princ _IdObj s)
     ;; bool[] _isApproach
     (write-long (length _isApproach) s)
     (dotimes (i (length _isApproach))
       (if (elt _isApproach i) (write-byte -1 s) (write-byte 0 s))
       )
     ;; float32[] _alpha
     (write-long (length _alpha) s)
     (dotimes (i (length _alpha))
       (sys::poke (elt _alpha i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _posX
     (write-long (length _posX) s)
     (dotimes (i (length _posX))
       (sys::poke (elt _posX i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _posY
     (write-long (length _posY) s)
     (dotimes (i (length _posY))
       (sys::poke (elt _posY i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _dis
     (write-long (length _dis) s)
     (dotimes (i (length _dis))
       (sys::poke (elt _dis i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _vel
     (write-long (length _vel) s)
     (dotimes (i (length _vel))
       (sys::poke (elt _vel i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _ttc
     (write-long (length _ttc) s)
     (dotimes (i (length _ttc))
       (sys::poke (elt _ttc i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; string[] _safetyZone
     (write-long (length _safetyZone) s)
     (dolist (elem _safetyZone)
       (write-long (length elem) s) (princ elem s)
       )
     ;; uint32 _msg_counter
       (write-long _msg_counter s)
     ;; bool _isObject
       (if _isObject (write-byte -1 s) (write-byte 0 s))
     ;; float32 _distance
       (sys::poke _distance (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _numObj
     (setq _numObj (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8[] _IdObj
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _IdObj (make-array n :element-type :char))
     (replace _IdObj buf :start2 ptr-) (incf ptr- n))
   ;; bool[] _isApproach
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _isApproach (make-list n))
     (dotimes (i n)
     (setf (elt _isApproach i) (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
     ))
   ;; float32[] _alpha
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _alpha (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _alpha i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _posX
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _posX (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _posX i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _posY
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _posY (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _posY i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _dis
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _dis (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _dis i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _vel
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _vel (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _vel i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _ttc
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _ttc (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _ttc i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; string[] _safetyZone
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _safetyZone (make-list n))
     (dotimes (i n)
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setf (elt _safetyZone i) (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
     ))
   ;; uint32 _msg_counter
     (setq _msg_counter (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; bool _isObject
     (setq _isObject (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; float32 _distance
     (setq _distance (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get radarscan_pkg::ttcRadar_msg :md5sum-) "68796b4398ded33c3293e6153473810f")
(setf (get radarscan_pkg::ttcRadar_msg :datatype-) "radarscan_pkg/ttcRadar_msg")
(setf (get radarscan_pkg::ttcRadar_msg :definition-)
      "uint8 numObj
uint8[] IdObj
bool[] isApproach
float32[] alpha
float32[] posX
float32[] posY
float32[] dis
float32[] vel
float32[] ttc
string[] safetyZone

uint32 msg_counter
bool isObject
float32 distance

")



(provide :radarscan_pkg/ttcRadar_msg "68796b4398ded33c3293e6153473810f")


