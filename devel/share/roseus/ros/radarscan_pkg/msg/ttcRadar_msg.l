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
  :slots (_isObj _numObj _IdObj _isApproach _alpha _posX _posY _distance _velocity _ttc ))

(defmethod radarscan_pkg::ttcRadar_msg
  (:init
   (&key
    ((:isObj __isObj) 0)
    ((:numObj __numObj) 0)
    ((:IdObj __IdObj) (make-array 0 :initial-element 0 :element-type :char))
    ((:isApproach __isApproach) (make-array 0 :initial-element 0 :element-type :char))
    ((:alpha __alpha) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:posX __posX) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:posY __posY) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:distance __distance) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:velocity __velocity) (make-array 0 :initial-element 0.0 :element-type :float))
    ((:ttc __ttc) (make-array 0 :initial-element 0.0 :element-type :float))
    )
   (send-super :init)
   (setq _isObj (round __isObj))
   (setq _numObj (round __numObj))
   (setq _IdObj __IdObj)
   (setq _isApproach __isApproach)
   (setq _alpha __alpha)
   (setq _posX __posX)
   (setq _posY __posY)
   (setq _distance __distance)
   (setq _velocity __velocity)
   (setq _ttc __ttc)
   self)
  (:isObj
   (&optional __isObj)
   (if __isObj (setq _isObj __isObj)) _isObj)
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
  (:distance
   (&optional __distance)
   (if __distance (setq _distance __distance)) _distance)
  (:velocity
   (&optional __velocity)
   (if __velocity (setq _velocity __velocity)) _velocity)
  (:ttc
   (&optional __ttc)
   (if __ttc (setq _ttc __ttc)) _ttc)
  (:serialization-length
   ()
   (+
    ;; uint8 _isObj
    1
    ;; uint8 _numObj
    1
    ;; uint8[] _IdObj
    (* 1    (length _IdObj)) 4
    ;; uint8[] _isApproach
    (* 1    (length _isApproach)) 4
    ;; float32[] _alpha
    (* 4    (length _alpha)) 4
    ;; float32[] _posX
    (* 4    (length _posX)) 4
    ;; float32[] _posY
    (* 4    (length _posY)) 4
    ;; float32[] _distance
    (* 4    (length _distance)) 4
    ;; float32[] _velocity
    (* 4    (length _velocity)) 4
    ;; float32[] _ttc
    (* 4    (length _ttc)) 4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; uint8 _isObj
       (write-byte _isObj s)
     ;; uint8 _numObj
       (write-byte _numObj s)
     ;; uint8[] _IdObj
     (write-long (length _IdObj) s)
     (princ _IdObj s)
     ;; uint8[] _isApproach
     (write-long (length _isApproach) s)
     (princ _isApproach s)
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
     ;; float32[] _distance
     (write-long (length _distance) s)
     (dotimes (i (length _distance))
       (sys::poke (elt _distance i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _velocity
     (write-long (length _velocity) s)
     (dotimes (i (length _velocity))
       (sys::poke (elt _velocity i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;; float32[] _ttc
     (write-long (length _ttc) s)
     (dotimes (i (length _ttc))
       (sys::poke (elt _ttc i) (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
       )
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; uint8 _isObj
     (setq _isObj (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8 _numObj
     (setq _numObj (sys::peek buf ptr- :char)) (incf ptr- 1)
   ;; uint8[] _IdObj
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _IdObj (make-array n :element-type :char))
     (replace _IdObj buf :start2 ptr-) (incf ptr- n))
   ;; uint8[] _isApproach
   (let ((n (sys::peek buf ptr- :integer))) (incf ptr- 4)
     (setq _isApproach (make-array n :element-type :char))
     (replace _isApproach buf :start2 ptr-) (incf ptr- n))
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
   ;; float32[] _distance
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _distance (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _distance i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _velocity
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _velocity (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _velocity i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;; float32[] _ttc
   (let (n)
     (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4)
     (setq _ttc (instantiate float-vector n))
     (dotimes (i n)
     (setf (elt _ttc i) (sys::peek buf ptr- :float)) (incf ptr- 4)
     ))
   ;;
   self)
  )

(setf (get radarscan_pkg::ttcRadar_msg :md5sum-) "e70fde2e65a20687ebfaaed6f2f230ff")
(setf (get radarscan_pkg::ttcRadar_msg :datatype-) "radarscan_pkg/ttcRadar_msg")
(setf (get radarscan_pkg::ttcRadar_msg :definition-)
      "uint8 isObj
uint8 numObj
uint8[] IdObj
uint8[] isApproach
float32[] alpha
float32[] posX
float32[] posY
float32[] distance
float32[] velocity
float32[] ttc

")



(provide :radarscan_pkg/ttcRadar_msg "e70fde2e65a20687ebfaaed6f2f230ff")


