
(cl:in-package :asdf)

(defsystem "radarscan_pkg-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "ttcRadar_msg" :depends-on ("_package_ttcRadar_msg"))
    (:file "_package_ttcRadar_msg" :depends-on ("_package"))
  ))