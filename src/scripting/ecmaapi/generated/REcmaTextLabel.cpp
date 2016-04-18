// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaTextLabel.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaPoint.h"
                 void REcmaTextLabel::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RTextLabel*) 0)));
        protoCreated = true;
    }

    
        // primary base class RPoint:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RPoint*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class RPoint
        REcmaHelper::registerFunction(&engine, proto, getRPoint, "getRPoint");
        
        // conversion for base class RShape
        REcmaHelper::registerFunction(&engine, proto, getRShape, "getRShape");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, clone, "clone");
            
            REcmaHelper::registerFunction(&engine, proto, getText, "getText");
            
            REcmaHelper::registerFunction(&engine, proto, getUserData, "getUserData");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RTextLabel*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RTextLabel
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RTextLabel",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaTextLabel::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextLabel(): Did you forget to construct with 'new'?"),
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
    
            // copyable class:
            RTextLabel
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        2
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
                ) /* type: RVector */
            
                && (
                
                        context->argument(
                        1
                        ).isString()
                ) /* type: QString */
            
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
                           return REcmaHelper::throwError("RTextLabel: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RTextLabel
                    cppResult(
                    a0
        ,
    a1
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        3
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
                ) /* type: RVector */
            
                && (
                
                        context->argument(
                        1
                        ).isString()
                ) /* type: QString */
            
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
                           return REcmaHelper::throwError("RTextLabel: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    QString
                    a1 =
                    (QString)
                    
                    context->argument( 1 ).
                    toString();
                
                    // argument isCopyable or pointer
                    QVariant
                    a2 =
                    qscriptvalue_cast<
                    QVariant
                        >(
                        context->argument(
                        2
                        )
                    );
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RTextLabel
                    cppResult(
                    a0
        ,
    a1
        ,
    a2
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RTextLabel(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaTextLabel::getRPoint(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RPoint* cppResult =
                    qscriptvalue_cast<RTextLabel*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
             QScriptValue REcmaTextLabel::getRShape(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RShape* cppResult =
                    qscriptvalue_cast<RTextLabel*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaTextLabel::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RTextLabel"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaTextLabel::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RPoint");
    
        list.append("RShape");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaTextLabel::clone
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextLabel::clone", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextLabel::clone";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextLabel* self = 
                        getSelf("clone", context);
                  

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
    // return type 'RTextLabel *'
    RTextLabel * cppResult =
        
               self->clone();
        // return type: RTextLabel *
                // pointer, copyable 
                result = qScriptValueFromValue(engine, *cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextLabel.clone().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextLabel::clone", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextLabel::getText
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextLabel::getText", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextLabel::getText";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextLabel* self = 
                        getSelf("getText", context);
                  

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
    // return type 'QString'
    QString cppResult =
        
               self->getText();
        // return type: QString
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextLabel.getText().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextLabel::getText", context, engine);
            return result;
        }
         QScriptValue
        REcmaTextLabel::getUserData
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaTextLabel::getUserData", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaTextLabel::getUserData";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RTextLabel* self = 
                        getSelf("getUserData", context);
                  

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
    // return type 'QVariant'
    QVariant cppResult =
        
               self->getUserData();
        // return type: QVariant
                // QVariant:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RTextLabel.getUserData().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaTextLabel::getUserData", context, engine);
            return result;
        }
         QScriptValue REcmaTextLabel::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RTextLabel* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RTextLabel(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaTextLabel::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RTextLabel cp = qscriptvalue_cast<RTextLabel>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaTextLabel::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RTextLabel* self = getSelf("RTextLabel", context);
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
    RTextLabel* REcmaTextLabel::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RTextLabel* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RTextLabel >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RTextLabel.%1(): "
                        "This object is not a RTextLabel").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RTextLabel* REcmaTextLabel::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RTextLabel* selfBase = getSelf(fName, context);
                RTextLabel* self = dynamic_cast<RTextLabel*>(selfBase);
                //return REcmaHelper::scriptValueTo<RTextLabel >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RTextLabel.%1(): "
                    "This object is not a RTextLabel").arg(fName),
                    context);
            }

            return self;
            


        }
        