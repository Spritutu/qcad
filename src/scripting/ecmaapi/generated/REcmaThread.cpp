// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaThread.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaThread::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RThread*) 0)));
        protoCreated = true;
    }

    
        // primary base class QThread:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QThread*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QThread
        REcmaHelper::registerFunction(&engine, proto, getQThread, "getQThread");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, start, "start");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RThread*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RThread*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, yieldCurrentThread, "yieldCurrentThread");
            
            REcmaHelper::registerFunction(&engine, &ctor, currentThreadAddress, "currentThreadAddress");
            
            REcmaHelper::registerFunction(&engine, &ctor, currentThreadName, "currentThreadName");
            
            REcmaHelper::registerFunction(&engine, &ctor, currentThread, "currentThread");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RThread",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaThread::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RThread(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellThread
                    * cppResult =
                    new
                    REcmaShellThread
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
        cppResult->__qtscript_self = result;
    
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                ) /* type: QObject * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QObject *
            a0 =
            qobject_cast<
            QObject *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellThread
                    * cppResult =
                    new
                    REcmaShellThread
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult, QScriptEngine::QtOwnership);
                
        cppResult->__qtscript_self = result;
    
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RThread(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaThread::getQThread(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QThread* cppResult =
                    qscriptvalue_cast<RThread*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaThread::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RThread"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaThread::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QThread");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaThread::start
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaThread::start", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaThread::start";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RThread* self = 
                        getSelf("start", context);
                  

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
    // return type 'void'
    
               self->start();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RThread.start().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaThread::start", context, engine);
            return result;
        }
         QScriptValue
        REcmaThread::yieldCurrentThread
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaThread::yieldCurrentThread", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaThread::yieldCurrentThread";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RThread::
       yieldCurrentThread();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RThread.yieldCurrentThread().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaThread::yieldCurrentThread", context, engine);
            return result;
        }
         QScriptValue
        REcmaThread::currentThreadAddress
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaThread::currentThreadAddress", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaThread::currentThreadAddress";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        RThread::
       currentThreadAddress();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RThread.currentThreadAddress().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaThread::currentThreadAddress", context, engine);
            return result;
        }
         QScriptValue
        REcmaThread::currentThreadName
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaThread::currentThreadName", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaThread::currentThreadName";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QString'
    QString cppResult =
        RThread::
       currentThreadName();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RThread.currentThreadName().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaThread::currentThreadName", context, engine);
            return result;
        }
         QScriptValue
        REcmaThread::currentThread
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaThread::currentThread", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaThread::currentThread";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RThread *'
    RThread * cppResult =
        RThread::
       currentThread();
        // return type: RThread *
                // QObject
                result = engine->newQObject(cppResult, QScriptEngine::QtOwnership);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RThread.currentThread().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaThread::currentThread", context, engine);
            return result;
        }
         QScriptValue REcmaThread::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RThread* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RThread(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaThread::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RThread* self = getSelf("RThread", context);
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
    RThread* REcmaThread::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RThread* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RThread >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RThread.%1(): "
                        "This object is not a RThread").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellThread* REcmaThread::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RThread* selfBase = getSelf(fName, context);
                REcmaShellThread* self = dynamic_cast<REcmaShellThread*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellThread >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RThread.%1(): "
                    "This object is not a RThread").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RThread*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RThread*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RThread*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    