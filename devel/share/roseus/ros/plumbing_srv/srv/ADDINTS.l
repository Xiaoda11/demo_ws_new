;; Auto-generated. Do not edit!


(when (boundp 'plumbing_srv::ADDINTS)
  (if (not (find-package "PLUMBING_SRV"))
    (make-package "PLUMBING_SRV"))
  (shadow 'ADDINTS (find-package "PLUMBING_SRV")))
(unless (find-package "PLUMBING_SRV::ADDINTS")
  (make-package "PLUMBING_SRV::ADDINTS"))
(unless (find-package "PLUMBING_SRV::ADDINTSREQUEST")
  (make-package "PLUMBING_SRV::ADDINTSREQUEST"))
(unless (find-package "PLUMBING_SRV::ADDINTSRESPONSE")
  (make-package "PLUMBING_SRV::ADDINTSRESPONSE"))

(in-package "ROS")





(defclass plumbing_srv::ADDINTSRequest
  :super ros::object
  :slots (_num1 _num2 ))

(defmethod plumbing_srv::ADDINTSRequest
  (:init
   (&key
    ((:num1 __num1) 0)
    ((:num2 __num2) 0)
    )
   (send-super :init)
   (setq _num1 (round __num1))
   (setq _num2 (round __num2))
   self)
  (:num1
   (&optional __num1)
   (if __num1 (setq _num1 __num1)) _num1)
  (:num2
   (&optional __num2)
   (if __num2 (setq _num2 __num2)) _num2)
  (:serialization-length
   ()
   (+
    ;; int32 _num1
    4
    ;; int32 _num2
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _num1
       (write-long _num1 s)
     ;; int32 _num2
       (write-long _num2 s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _num1
     (setq _num1 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;; int32 _num2
     (setq _num2 (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass plumbing_srv::ADDINTSResponse
  :super ros::object
  :slots (_sum ))

(defmethod plumbing_srv::ADDINTSResponse
  (:init
   (&key
    ((:sum __sum) 0)
    )
   (send-super :init)
   (setq _sum (round __sum))
   self)
  (:sum
   (&optional __sum)
   (if __sum (setq _sum __sum)) _sum)
  (:serialization-length
   ()
   (+
    ;; int32 _sum
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; int32 _sum
       (write-long _sum s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; int32 _sum
     (setq _sum (sys::peek buf ptr- :integer)) (incf ptr- 4)
   ;;
   self)
  )

(defclass plumbing_srv::ADDINTS
  :super ros::object
  :slots ())

(setf (get plumbing_srv::ADDINTS :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get plumbing_srv::ADDINTS :datatype-) "plumbing_srv/ADDINTS")
(setf (get plumbing_srv::ADDINTS :request) plumbing_srv::ADDINTSRequest)
(setf (get plumbing_srv::ADDINTS :response) plumbing_srv::ADDINTSResponse)

(defmethod plumbing_srv::ADDINTSRequest
  (:response () (instance plumbing_srv::ADDINTSResponse :init)))

(setf (get plumbing_srv::ADDINTSRequest :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get plumbing_srv::ADDINTSRequest :datatype-) "plumbing_srv/ADDINTSRequest")
(setf (get plumbing_srv::ADDINTSRequest :definition-)
      "# ???????????????????????????????????????
int32 num1
int32 num2
---
# ??????????????????????????????
int32 sum

")

(setf (get plumbing_srv::ADDINTSResponse :md5sum-) "4781436a0c2affec8025955a6041e481")
(setf (get plumbing_srv::ADDINTSResponse :datatype-) "plumbing_srv/ADDINTSResponse")
(setf (get plumbing_srv::ADDINTSResponse :definition-)
      "# ???????????????????????????????????????
int32 num1
int32 num2
---
# ??????????????????????????????
int32 sum

")



(provide :plumbing_srv/ADDINTS "4781436a0c2affec8025955a6041e481")


