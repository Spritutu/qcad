// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaRestrictOrthogonal.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RDocumentInterface.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSnapRestriction.h"
                 void REcmaRestrictOrthogonal::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RRestrictOrthogonal*) 0)));
        protoCreated = true;
    }

    
        // primary base class RSnapRestriction:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RSnapRestriction*>());

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
    
        // conversion for base class RSnapRestriction
        REcmaHelper::registerFunction(&engine, proto, getRSnapRestriction, "getRSnapRestriction");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, restrictSnap, "restrictSnap");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RRestrictOrthogonal*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    ctor.setProperty("Vertical",
    QScriptValue(RRestrictOrthogonal::Vertical),
    QScriptValue::ReadOnly);


    ctor.setProperty("Horizonal",
    QScriptValue(RRestrictOrthogonal::Horizonal),
    QScriptValue::ReadOnly);


    ctor.setProperty("Orthogonal",
    QScriptValue(RRestrictOrthogonal::Orthogonal),
    QScriptValue::ReadOnly);


    // enum conversions:
    
    qScriptRegisterMetaType<RRestrictOrthogonal::OrthoMode>(
        &engine,
        toScriptValueEnumOrthoMode,
        fromScriptValueEnumOrthoMode,
        ctor.property(QString::fromLatin1("prototype"))
    );

        
    // init class:
    engine.globalObject().setProperty("RRestrictOrthogonal",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaRestrictOrthogonal::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RRestrictOrthogonal(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RDocumentInterface * */
            
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RDocumentInterface * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RDocumentInterface >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RRestrictOrthogonal: Argument 0 is not of type RDocumentInterface *RDocumentInterface *.", context);                    
                    }
                
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RRestrictOrthogonal
                    * cppResult =
                    new
                    RRestrictOrthogonal
                    (
                    a0
                    );
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RRestrictOrthogonal(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaRestrictOrthogonal::getRSnapRestriction(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSnapRestriction* cppResult =
                    qscriptvalue_cast<RRestrictOrthogonal*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaRestrictOrthogonal::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RRestrictOrthogonal"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaRestrictOrthogonal::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RSnapRestriction");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaRestrictOrthogonal::restrictSnap
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaRestrictOrthogonal::restrictSnap", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaRestrictOrthogonal::restrictSnap";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RRestrictOrthogonal* self = 
                        getSelf("restrictSnap", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
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
                           return REcmaHelper::throwError("RRestrictOrthogonal: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
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
                           return REcmaHelper::throwError("RRestrictOrthogonal: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->restrictSnap(a0
        ,
    a1);
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RRestrictOrthogonal.restrictSnap().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaRestrictOrthogonal::restrictSnap", context, engine);
            return result;
        }
         QScriptValue REcmaRestrictOrthogonal::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RRestrictOrthogonal* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RRestrictOrthogonal(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaRestrictOrthogonal::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RRestrictOrthogonal* self = getSelf("RRestrictOrthogonal", context);
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
    RRestrictOrthogonal* REcmaRestrictOrthogonal::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RRestrictOrthogonal* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RRestrictOrthogonal >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RRestrictOrthogonal.%1(): "
                        "This object is not a RRestrictOrthogonal").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RRestrictOrthogonal* REcmaRestrictOrthogonal::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RRestrictOrthogonal* selfBase = getSelf(fName, context);
                RRestrictOrthogonal* self = dynamic_cast<RRestrictOrthogonal*>(selfBase);
                //return REcmaHelper::scriptValueTo<RRestrictOrthogonal >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RRestrictOrthogonal.%1(): "
                    "This object is not a RRestrictOrthogonal").arg(fName),
                    context);
            }

            return self;
            


        }
         QScriptValue REcmaRestrictOrthogonal::toScriptValueEnumOrthoMode(QScriptEngine* engine, const RRestrictOrthogonal::OrthoMode& value)
    
        {
            return QScriptValue(engine, (int)value);
        }
         void REcmaRestrictOrthogonal::fromScriptValueEnumOrthoMode(const QScriptValue& value, RRestrictOrthogonal::OrthoMode& out)
    
        {
            out = qvariant_cast<RRestrictOrthogonal::OrthoMode>(value.toVariant());
        }
        