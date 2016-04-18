// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaMouseEvent.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RGraphicsScene.h"
            
                #include "RGraphicsView.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaInputEvent.h"
                 void REcmaMouseEvent::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RMouseEvent*) 0)));
        protoCreated = true;
    }

    
        // primary base class QMouseEvent:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QMouseEvent*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaInputEvent::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QMouseEvent
        REcmaHelper::registerFunction(&engine, proto, getQMouseEvent, "getQMouseEvent");
        
        // conversion for base class RInputEvent
        REcmaHelper::registerFunction(&engine, proto, getRInputEvent, "getRInputEvent");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

        // properties of secondary base class RInputEvent:
        

        // methods of secondary base class RInputEvent:
        
            REcmaHelper::registerFunction(&engine, proto, getModelPosition, "getModelPosition");
            
            REcmaHelper::registerFunction(&engine, proto, setModelPosition, "setModelPosition");
            
            REcmaHelper::registerFunction(&engine, proto, setScreenPosition, "setScreenPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getScreenPosition, "getScreenPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getGraphicsView, "getGraphicsView");
            
            REcmaHelper::registerFunction(&engine, proto, getGraphicsScene, "getGraphicsScene");
            
            REcmaHelper::registerFunction(&engine, proto, isValid, "isValid");
            

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RMouseEvent*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, hasMouseMoved, "hasMouseMoved");
            
            REcmaHelper::registerFunction(&engine, &ctor, resetOriginalMousePos, "resetOriginalMousePos");
            
            REcmaHelper::registerFunction(&engine, &ctor, setOriginalMousePos, "setOriginalMousePos");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RMouseEvent",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaMouseEvent::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMouseEvent(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        7
                && (
                
                        context->argument(
                        0
                        ).isNumber()
                ) /* type: QEvent::Type */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RVector */
            
                && (
                
                        context->argument(
                        2
                        ).isNumber()
                ) /* type: Qt::MouseButton */
            
                && (
                
                        context->argument(
                        3
                        ).isNumber()
                ) /* type: Qt::MouseButtons */
            
                && (
                
                        context->argument(
                        4
                        ).isNumber()
                ) /* type: Qt::KeyboardModifiers */
            
                && (
                
                        context->argument(
                        5
                        ).isVariant()
                        ||
                    
                        context->argument(
                        5
                        ).isQObject()
                        ||
                    
                        context->argument(
                        5
                        ).isNull()
                ) /* type: RGraphicsScene */
            
                && (
                
                        context->argument(
                        6
                        ).isVariant()
                        ||
                    
                        context->argument(
                        6
                        ).isQObject()
                        ||
                    
                        context->argument(
                        6
                        ).isNull()
                ) /* type: RGraphicsView */
            
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    QEvent::Type
                    a0 =
                    (QEvent::Type)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap1 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RMouseEvent: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
                    // argument isStandardType
                    Qt::MouseButton
                    a2 =
                    (Qt::MouseButton)
                    (int)
                    context->argument( 2 ).
                    toNumber();
                
                    // argument isStandardType
                    Qt::MouseButtons
                    a3 =
                    (Qt::MouseButtons)
                    (int)
                    context->argument( 3 ).
                    toNumber();
                
                    // argument isStandardType
                    Qt::KeyboardModifiers
                    a4 =
                    (Qt::KeyboardModifiers)
                    (int)
                    context->argument( 4 ).
                    toNumber();
                
                    // argument is reference
                    RGraphicsScene*
                    ap5 =
                    qscriptvalue_cast<
                    RGraphicsScene*
                        >(
                        context->argument(
                        5
                        )
                    );
                    if( ap5 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 5 is not of type RGraphicsScene*.",
                               context);                    
                    }
                    RGraphicsScene& a5 = *ap5;
                
                    // argument is reference
                    RGraphicsView*
                    ap6 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        6
                        )
                    );
                    if( ap6 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 6 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a6 = *ap6;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RMouseEvent
                    * cppResult =
                    new
                    RMouseEvent
                    (
                    a0
        ,
    a1
        ,
    a2
        ,
    a3
        ,
    a4
        ,
    a5
        ,
    a6
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        3
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                ) /* type: QMouseEvent */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RGraphicsScene */
            
                && (
                
                        context->argument(
                        2
                        ).isVariant()
                        ||
                    
                        context->argument(
                        2
                        ).isQObject()
                        ||
                    
                        context->argument(
                        2
                        ).isNull()
                ) /* type: RGraphicsView */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    QMouseEvent*
                    ap0 =
                    qscriptvalue_cast<
                    QMouseEvent*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 0 is not of type QMouseEvent*.",
                               context);                    
                    }
                    QMouseEvent& a0 = *ap0;
                
                    // argument is reference
                    RGraphicsScene*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsScene*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 1 is not of type RGraphicsScene*.",
                               context);                    
                    }
                    RGraphicsScene& a1 = *ap1;
                
                    // argument is reference
                    RGraphicsView*
                    ap2 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 2 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a2 = *ap2;
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RMouseEvent
                    * cppResult =
                    new
                    RMouseEvent
                    (
                    a0
        ,
    a1
        ,
    a2
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    if( context->argumentCount() ==
        4
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                ) /* type: QMouseEvent */
            
                && (
                
                        context->argument(
                        1
                        ).isVariant()
                        ||
                    
                        context->argument(
                        1
                        ).isQObject()
                        ||
                    
                        context->argument(
                        1
                        ).isNull()
                ) /* type: RGraphicsScene */
            
                && (
                
                        context->argument(
                        2
                        ).isVariant()
                        ||
                    
                        context->argument(
                        2
                        ).isQObject()
                        ||
                    
                        context->argument(
                        2
                        ).isNull()
                ) /* type: RGraphicsView */
            
                && (
                
                        context->argument(
                        3
                        ).isNumber()
                ) /* type: qreal */
            
    ){
    // prepare arguments:
    
                    // argument is reference
                    QMouseEvent*
                    ap0 =
                    qscriptvalue_cast<
                    QMouseEvent*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 0 is not of type QMouseEvent*.",
                               context);                    
                    }
                    QMouseEvent& a0 = *ap0;
                
                    // argument is reference
                    RGraphicsScene*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsScene*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 1 is not of type RGraphicsScene*.",
                               context);                    
                    }
                    RGraphicsScene& a1 = *ap1;
                
                    // argument is reference
                    RGraphicsView*
                    ap2 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        2
                        )
                    );
                    if( ap2 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 2 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a2 = *ap2;
                
                    // argument isStandardType
                    qreal
                    a3 =
                    (qreal)
                    
                    context->argument( 3 ).
                    toNumber();
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RMouseEvent
                    * cppResult =
                    new
                    RMouseEvent
                    (
                    a0
        ,
    a1
        ,
    a2
        ,
    a3
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMouseEvent(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaMouseEvent::getQMouseEvent(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QMouseEvent* cppResult =
                    qscriptvalue_cast<RMouseEvent*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaMouseEvent::getRInputEvent(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RInputEvent* cppResult =
                    qscriptvalue_cast<RMouseEvent*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaMouseEvent::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RMouseEvent"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaMouseEvent::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QMouseEvent");
    
        list.append("RInputEvent");
    

        return qScriptValueFromSequence(engine, list);
    }
    
        // properties of secondary base class RInputEvent:
        

        // methods of secondary base class RInputEvent:
         QScriptValue
        REcmaMouseEvent::getModelPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::getModelPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::getModelPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMouseEvent* self = 
                        getSelf("getModelPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getModelPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.getModelPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::getModelPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaMouseEvent::setModelPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::setModelPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::setModelPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMouseEvent* self = 
                        getSelf("setModelPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RInputEvent: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setModelPosition(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.setModelPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::setModelPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaMouseEvent::setScreenPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::setScreenPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::setScreenPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMouseEvent* self = 
                        getSelf("setScreenPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RInputEvent: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->setScreenPosition(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.setScreenPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::setScreenPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaMouseEvent::getScreenPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::getScreenPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::getScreenPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMouseEvent* self = 
                        getSelf("getScreenPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getScreenPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.getScreenPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::getScreenPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaMouseEvent::getGraphicsView
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::getGraphicsView", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::getGraphicsView";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMouseEvent* self = 
                        getSelf("getGraphicsView", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RGraphicsView &'
    RGraphicsView & cppResult =
        
               self->getGraphicsView();
        // return type: RGraphicsView &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.getGraphicsView().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::getGraphicsView", context, engine);
            return result;
        }
         QScriptValue
        REcmaMouseEvent::getGraphicsScene
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::getGraphicsScene", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::getGraphicsScene";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMouseEvent* self = 
                        getSelf("getGraphicsScene", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RGraphicsScene &'
    RGraphicsScene & cppResult =
        
               self->getGraphicsScene();
        // return type: RGraphicsScene &
                // reference
                result = engine->newVariant(
                QVariant::fromValue(&cppResult));
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.getGraphicsScene().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::getGraphicsScene", context, engine);
            return result;
        }
         QScriptValue
        REcmaMouseEvent::isValid
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::isValid", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::isValid";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMouseEvent* self = 
                        getSelf("isValid", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isValid();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.isValid().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::isValid", context, engine);
            return result;
        }
        

    // properties:
    

    // public methods:
     QScriptValue
        REcmaMouseEvent::hasMouseMoved
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::hasMouseMoved", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::hasMouseMoved";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        RMouseEvent::
       hasMouseMoved();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.hasMouseMoved().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::hasMouseMoved", context, engine);
            return result;
        }
         QScriptValue
        REcmaMouseEvent::resetOriginalMousePos
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::resetOriginalMousePos", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::resetOriginalMousePos";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RMouseEvent::
       resetOriginalMousePos();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.resetOriginalMousePos().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::resetOriginalMousePos", context, engine);
            return result;
        }
         QScriptValue
        REcmaMouseEvent::setOriginalMousePos
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMouseEvent::setOriginalMousePos", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMouseEvent::setOriginalMousePos";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: QPoint */
    
    ){
    // prepare arguments:
    
                    // argument is reference
                    QPoint*
                    ap0 =
                    qscriptvalue_cast<
                    QPoint*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if( ap0 == NULL ){
                           return REcmaHelper::throwError("RMouseEvent: Argument 0 is not of type QPoint*.",
                               context);                    
                    }
                    QPoint& a0 = *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RMouseEvent::
       setOriginalMousePos(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMouseEvent.setOriginalMousePos().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMouseEvent::setOriginalMousePos", context, engine);
            return result;
        }
         QScriptValue REcmaMouseEvent::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RMouseEvent* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RMouseEvent(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaMouseEvent::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RMouseEvent* self = getSelf("RMouseEvent", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RMouseEvent* REcmaMouseEvent::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RMouseEvent* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RMouseEvent >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RMouseEvent.%1(): "
                        "This object is not a RMouseEvent").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RMouseEvent* REcmaMouseEvent::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RMouseEvent* selfBase = getSelf(fName, context);
                RMouseEvent* self = dynamic_cast<RMouseEvent*>(selfBase);
                //return REcmaHelper::scriptValueTo<RMouseEvent >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RMouseEvent.%1(): "
                    "This object is not a RMouseEvent").arg(fName),
                    context);
            }

            return self;
            


        }
        